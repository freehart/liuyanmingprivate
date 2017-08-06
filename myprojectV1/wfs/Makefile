cc ?= gcc
ld ?= ld
MAKE ?= make
Cflags ?= -w
includefile = -I./include
curdir = $(shell pwd)
wfstmpdir = $(compiletmpdir)
ifeq ( ,$(wfstmpdir))
 wfstmpdir = $(curdir)/tmp
endif
last_tag=$(wfstmpdir)/wfs.obj
allobj = $(wfstmpdir)/wfsboard.obj $(wfstmpdir)/wfscomm.obj #$(wfstmpdir)/wfsdbgshell.obj
alltag = wfsboard wfscomm #wfsdbgshell
.PHONY: $(alltag) clean test install all
all:$(alltag)  $(last_tag)

$(last_tag): $(allobj)
	$(ld) -r $(allobj) -o $(last_tag)

wfsboard:
	@echo making wfsboard
	$(MAKE) -C  $(curdir)/wfsboard
	@echo make down

wfscomm:
	@echo making wfscomm
	$(MAKE) -C  $(curdir)/wfscomm
	@echo make down

wfsdbgshell:
	@echo making wfsdbgshell
	$(MAKE) -C  $(curdir)/wfsdbgshell
	@echo make down

test:
	@echo $(includefile)
	@echo $(Sourcedir)
	@echo $(allsourcefile)
	@echo $(allfileD)
	@echo $(allfileO)
	@echo $(last_tag)
	@echo $(boardtmpdir)

clean:
	rm  $(boardtmpdir)/*
