# Alternative GNU Make workspace makefile autogenerated by Premake

ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

ifeq ($(config),debug)
  Boost_viwer_config = debug

else ifeq ($(config),release)
  Boost_viwer_config = release

else
  $(error "invalid configuration $(config)")
endif

PROJECTS := Boost_viwer

.PHONY: all clean help $(PROJECTS) 

all: $(PROJECTS)

Boost_viwer:
ifneq (,$(Boost_viwer_config))
	@echo "==== Building Boost_viwer ($(Boost_viwer_config)) ===="
	@${MAKE} --no-print-directory -C . -f Boost_viwer.make config=$(Boost_viwer_config)
endif

clean:
	@${MAKE} --no-print-directory -C . -f Boost_viwer.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "  debug"
	@echo "  release"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   Boost_viwer"
	@echo ""
	@echo "For more information, see https://github.com/premake/premake-core/wiki"