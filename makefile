include project.mk
SECTIONS=ModuleA ModuleB ModuleC RELEASE
all:
	for dir in $(SECTIONS); do $(MAKE) -C $$dir || exit "$$?"; done
	@echo $(OBJS)

.PHONY:clean
clean:
	$(RM) RELEASE/*.o RELEASE/*.out

