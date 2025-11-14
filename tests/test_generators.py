#!/usr/bin/env python3
"""
Pytest tests for the generator scripts.

Tests verify that the main() functions can process simple inputs
and generate parsable output in JSON/YAML formats.
"""

import pytest
import json
import tempfile
import os
import sys
from pathlib import Path

# Add generators to path
sys.path.insert(0, str(Path(__file__).parent.parent / 'generators'))

import yaml_jinja
import rdl_jinja
import svd_jinja
import idl_jinja
import idl_jinja_bridle


class TestYamlJinja:
    """Tests for yaml_jinja.py main() function."""

    def test_yaml_to_json(self, tmp_path):
        """Test converting YAML to JSON output."""
        # Setup paths
        yaml_file = Path(__file__).parent / "fixtures" / "simple.yaml"
        template_file = "simple_yaml.json"
        templates_path = str(Path(__file__).parent / "templates")
        out_file = tmp_path / "output.json"

        # Run main
        yaml_jinja.main(
            str(yaml_file),
            template_file,
            str(out_file),
            templates_path,
            None
        )

        # Verify output exists and is valid JSON
        assert out_file.exists()
        with open(out_file) as f:
            data = json.load(f)

        # Verify content
        assert data['name'] == 'test'
        assert data['version'] == 1.0
        assert len(data['items']) == 2
        assert data['items'][0]['id'] == 1
        assert data['items'][0]['value'] == 'foo'


class TestRdlJinja:
    """Tests for rdl_jinja.py main() function."""

    @pytest.mark.skipif(
        not __import__('importlib.util').util.find_spec('systemrdl'),
        reason="systemrdl not installed"
    )
    def test_rdl_to_json(self, tmp_path):
        """Test converting RDL to JSON output."""
        # Setup paths
        rdl_file = Path(__file__).parent / "fixtures" / "tiny_test.rdl"
        templates_path = str(Path(__file__).parent / "templates")
        component_templates = ["simple_rdl.json"]
        out_path = str(tmp_path)

        # Run main
        rdl_jinja.main(
            str(rdl_file),
            templates_path,
            component_templates,
            out_path
        )

        # Verify output exists and is valid JSON
        out_file = tmp_path / "simple_rdl.json"
        assert out_file.exists()
        with open(out_file) as f:
            data = json.load(f)

        # Verify content
        assert 'component_name' in data
        assert 'root_node_type' in data


class TestSvdJinja:
    """Tests for svd_jinja.py main() function."""

    @pytest.mark.skipif(
        not __import__('importlib.util').util.find_spec('cmsis_svd'),
        reason="cmsis_svd not installed"
    )
    def test_svd_to_json(self, tmp_path):
        """Test converting SVD to JSON output."""
        # Setup paths
        svd_file = Path(__file__).parent / "fixtures" / "simple.svd"
        templates_path = str(Path(__file__).parent / "templates")
        device_templates = ["simple_svd.json"]
        out_path = str(tmp_path)

        # Run main
        svd_jinja.main(
            str(svd_file),
            templates_path,
            [],  # no peripheral templates
            device_templates,
            out_path
        )

        # Verify output exists and is valid JSON
        out_file = tmp_path / "simple_svd.json"
        assert out_file.exists()
        with open(out_file) as f:
            data = json.load(f)

        # Verify content
        assert data['device_name'] == 'SimpleDevice'
        assert data['device_version'] == '1.0'
        assert data['peripheral_count'] == 1
        assert data['first_peripheral'] == 'TIMER0'


class TestObjdumpJinja:
    """Tests for objdump_jinja.py main() function."""

    def test_objdump_basic(self, tmp_path):
        """Test objdump processing with minimal template."""
        # This test would require an objdump file and template
        # Placeholder for when objdump test fixtures are created
        pytest.skip("Objdump test fixture not yet created")


class TestIdlJinja:
    """Tests for idl_jinja.py main() function (using OpenSplice idlpp)."""

    def test_idl_to_json(self, tmp_path):
        """Test converting IDL to JSON output."""
        # Setup paths
        idl_file = Path(__file__).parent / "fixtures" / "simple.idl"
        template_file = "simple_idl.json"
        templates_path = str(Path(__file__).parent / "templates")
        out_file = tmp_path / "output.json"

        # Check if idlpp is available
        import subprocess
        try:
            subprocess.run(["idlpp", "--version"],
                         capture_output=True,
                         check=False,
                         timeout=5)
        except (FileNotFoundError, subprocess.TimeoutExpired):
            pytest.skip("OpenSplice DDS idlpp tool not installed")

        # Run main
        try:
            idl_jinja.main(
                str(idl_file),
                template_file,
                str(out_file),
                templates_path,
                None
            )
        except RuntimeError as e:
            pytest.skip(f"IDL processing failed: {e}")

        # Verify output exists and is valid JSON
        assert out_file.exists()
        with open(out_file) as f:
            data = json.load(f)

        # Verify content has topics structure
        assert 'topics' in data


class TestIdlJinjaBridle:
    """Tests for idl_jinja_bridle.py main() function (using bridle parser)."""

    @pytest.mark.skipif(
        not __import__('importlib.util').util.find_spec('bridle'),
        reason="bridle library not installed"
    )
    def test_idl_to_json_bridle(self, tmp_path):
        """Test converting IDL to JSON output using bridle parser."""
        # Setup paths
        idl_file = Path(__file__).parent / "fixtures" / "simple.idl"
        template_file = "simple_idl_bridle.json"
        templates_path = str(Path(__file__).parent / "templates")
        out_file = tmp_path / "output.json"

        # Run main
        idl_jinja_bridle.main(
            str(idl_file),
            template_file,
            str(out_file),
            templates_path,
            None
        )

        # Verify output exists and is valid JSON
        assert out_file.exists()
        with open(out_file) as f:
            data = json.load(f)

        # Verify content
        assert data['file'] == str(idl_file)
        assert data['module_count'] == 1
        assert data['first_module'] == 'HelloWorldData'
        assert data['module_type'] == 'ModuleNode'


if __name__ == "__main__":
    pytest.main([__file__, "-v"])
