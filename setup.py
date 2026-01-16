"""
Setup script for development-utils - Backward compatibility wrapper.
"""

from pathlib import Path

import setuptools

this_directory = Path(__file__).parent
long_description = (this_directory / "README.md").read_text(encoding="utf-8")

setuptools.setup(
    name="development-utils",
    use_scm_version={"fallback_version": "0.1.0"},
    setup_requires=["setuptools_scm"],
    description="Code generation tools for embedded development",
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="Phil",
    url="https://github.com/nakane1chome/development-utils",
    packages=setuptools.find_packages(),
    python_requires=">=3.8",
    install_requires=[
        "jinja2",
        "cmsis-svd",
        "pyyaml",
        "Pygments",
        "jinja2_highlight",
        "systemrdl-compiler",
    ],
    extras_require={
        "dev": ["pytest", "black", "flake8", "mypy"],
    },
    entry_points={
        "console_scripts": [
            "svd-jinja=generators.svd_jinja:cli_main",
            "rdl-jinja=generators.rdl_jinja:cli_main",
            "idl-jinja=generators.idl_jinja:cli_main",
            "idl-jinja-bridle=generators.idl_jinja_bridle:cli_main",
            "yaml-jinja=generators.yaml_jinja:cli_main",
            "objdump-jinja=generators.objdump_jinja:cli_main",
        ]
    },
    include_package_data=True,
    package_data={"generators": ["templates/*"]},
)
