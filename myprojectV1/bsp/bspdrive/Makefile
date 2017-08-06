cc = gcc
ld = ld
Cflags = -w
includefile = -I./include
Sourcedir = $(shell pwd)/source

tmpdir = $(shell pwd)/tmp
allsourcefile = $(wildcard $(Sourcedir)/*.c)
boardtmpdir = $(compiletmpdir)
ifeq ( ,$(boardtmpdir))
 boardtmpdir = $(tmpdir)
endif
allfileD =$(addprefix $(boardtmpdir)/,$(notdir $(subst .c,.d ,$(allsourcefile))))
allfileO = $(patsubst %.d,%.o,$(allfileD))
last_tag=$(boardtmpdir)/bspdrive.obj

default: $(last_tag)
.PHONY :clean
#output last taget


$(last_tag):$(allfileO)
	$(ld) -r $(allfileO) -o $(last_tag)

$(boardtmpdir)/%.o: $(Sourcedir)/%.c
	$(cc) -c $(Cflags) $(includefile) $< -o $@ 

$(boardtmpdir)/%.d: $(Sourcedir)/%.c
	$(cc) -MM $(Cflags) $(includefile) $< | sed "s#$*.o[ :]#$(boardtmpdir)/$*.o $(boardtmpdir)/$*.d :#g" > $@

 -include $(allfileD)

clean:
	@echo $(includefile)
	@echo $(Sourcedir)
	@echo $(allsourcefile)
	@echo $(allfileD)
	@echo $(allfileO)
	@echo $(last_tag)
	@echo $(boardtmpdir)
	rm  $(boardtmpdir)/*
