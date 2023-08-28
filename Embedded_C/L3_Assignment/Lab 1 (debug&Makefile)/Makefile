#@copyrights : Mark

CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I . 
LIBS=
SRC = $(wildcard *.c) #all the .c files are in SRC variable 
OBJ= $(SRC:.c=.o)
AS = $(wildcard *.s) #all the .c files are in SRC variable 
ASOBJ= $(AS:.s=.o)
Project_name=learn-in-depth

# $< : dependencies , $@ :target

all: $(Project_name).bin
	@echo "===========Build is Done================"

# % is for all .o >> .c do the next step  
#target : dependencies
%.o: %.c
	 $(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker-script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm  *.o  *.bin  *.elf

clean:
	rm *.bin  *.elf