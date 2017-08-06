curdir = $(shell pwd)
export compiletmpdir = $(curdir)/tmp
allobjdir = $(compiletmpdir)
alltag = wfs bsp
last_tag = ./MGR.EXE
allobj = $(allobjdir)/wfs.obj $(allobjdir)/bsp.obj
.PHONY: $(alltag) clean test install run
all: $(alltag)  $(last_tag)
$(last_tag): $(allobj)
	gcc  $(allobj) -o $(last_tag)

wfs:
	@echo making wfs
	$(MAKE) -C  $(curdir)/wfs
	@echo make down

bsp:
	@echo making bsp
	$(MAKE) -C  $(curdir)/bsp
	@echo make down

test:
	@echo $(compiletmpdir)
	@echo $(alltag)
	@echo $(allobj)
	@echo $(last_tag)
	@echo $(all)

clean:
	rm  $(allobjdir)/*

install :

run:
	$(shell  $(last_tag))
