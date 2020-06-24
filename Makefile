PROGRAM=project_template
# EXTRA_COMPONENTS =

# Settings for the ESP Dev board
FLASH_SIZE = 32
FLASH_MODE = dio
FLASH_SPEED = 80
ESPPORT = "/dev/tty.SLAB_USBtoUART"

include ../esp-open-rtos/common.mk


monitor:
	$(FILTEROUTPUT) --port $(ESPPORT) --baud 115200 --elf $(PROGRAM_OUT)