SCRIPTS=$(wildcard *.sh)
EXAMPLES=${SCRIPTS:%.sh=%}

all : ${EXAMPLES:%=.%-gen}
	@echo generated: ${EXAMPLES}

.%-gen : %.sh ../generators/jinja_filters.py
	./${*}.sh
	date >> $@

.svd_cxx17_headers-gen: \
	${wildcard ../cxx17_mmio_interface/template/*}

.svd_cxx20_headers-gen: \
	${wildcard ../cxx20_mmio_interface/template/*}

.dbml_jinja-gen : \
	dbml/example_schema.dbml \
	${wildcard ../../templates/dbml_jinja/docs/*}  \
	${wildcard ../../templates/dbml_jinja/sqlalchemy//*}

.rdl_jinja-gen : \
	${wildcard ../../templates/rdl_jinja/*}  \

.svd_jinja-gen : \
	${wildcard ../../templates/svd_jinja/*}  \

.yaml_jinja-gen : \
	./device_data/rpi.yaml \
	../templates/yaml_jinja/dts_yaml.html


clean :
	rm ${EXAMPLES:%=.%-gen}
