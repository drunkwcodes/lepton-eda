## Process this file with automake to produce Makefile.in

sch_files = \
	sch/simple_trans.sch \
	sch/sp_diode.sch \
	sch/transitest.sch

sym_files = \
	sym/BJT_transistor_simple.sym \
	sym/capacitor.sym \
	sym/current_source.sym \
	sym/gnd_node.sym \
	sym/port.sym \
	sym/resistor.sym \
	sym/sp_diode.sym \
	sym/sp_voltage_dependend_capacitor.sym \
	sym/spice-cs.sym \
	sym/voltage_source.sym

SUBDIRS = vhdl

EXTRA_DIST = README commonrc gnetlistrc gschemrc geda.conf generate_netlist.scm \
	$(sch_files) $(sym_files)

MOSTLYCLEANFILES =  core *.log FILE *.ps *~
CLEANFILES = core *.log FILE *.ps *~
DISTCLEANFILES = *.log core FILE *~
MAINTAINERCLEANFILES = core *.log FILE *.ps *~ Makefile.in

