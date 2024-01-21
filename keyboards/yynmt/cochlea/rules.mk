# Build Options
# Encoder support
ENCODER_ENABLE = yes

# Valid SRAM usage
LDFLAGS+=-Wl,--cref,--defsym=__DATA_REGION_LENGTH__=1024

# Optimize SRAM usage
EXTRAFLAGS += -flto
