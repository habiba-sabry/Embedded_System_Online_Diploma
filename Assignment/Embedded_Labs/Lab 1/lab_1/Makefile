cc=arm-none-eabi-
cflags=-mcpu=arm926ej-s -g
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
project_name=learn-in-depth

all: $(project_name).bin
	@echo "Build is Done"

$(project_name).bin: $(project_name).elf
	$(cc)objcopy.exe -O binary $< $@

%.o : %.c 
	$(cc)gcc.exe -c $(cflags) $< -o $@

%.o : %.s
	$(cc)as.exe $(cflags) $< -o $@

$(project_name).elf: $(OBJ) $(ASOBJ)
	$(cc)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map


clean_all:
	rm -f *.o *.elf *.bin *.map

clean:
	rm -f *.elf *.bin