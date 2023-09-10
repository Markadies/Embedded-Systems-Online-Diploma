#@copyrights : Mark

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2
INCS=-I . 
LIBS=
SRC = $(wildcard *.c) #all the .c files are in SRC variable 
OBJ= $(SRC:.c=.o)
AS = $(wildcard *.s) #all the .c files are in SRC variable 
ASOBJ= $(AS:.s=.o)

##########################
Project_name= Pressure_Controller_MK
##########################

# $< : dependencies , $@ :target

all: $(Project_name).bin
	@echo "===========Build is Done================"

# % is for all .o >> .c do the next step  
#target : dependencies

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@	

%.o: %.c
	 $(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@


#linking all objects files to .elf file and generate map file
$(Project_name).elf: $(OBJ)$(ASOBJ)
	$(CC)ld.exe -T linker-script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map-file.map
	cp $(Project_Name).elf $(Project_Name).axf


#generate binary file which will be executed
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@


clean_all:
	rm  *.o  *.bin  *.elf

clean:
	rm *.bin  *.elf