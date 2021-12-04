PREF_MENU = ./menuPrintScanf/
PREF_INPUT = ./inputData/
PREF_OUTPUT = ./outputData/
PREF_PROCESSED = ./processedData/
PREF_LIB = ./my_lib/

SRCMENU = $(wildcard $(PREF_MENU)*.c)
SRCINPUT = $(wildcard $(PREF_INPUT)*.c)
SRCOUTPUT = $(wildcard $(PREF_OUTPUT)*.c)
SRCPROCESSED = $(wildcard $(PREF_PROCESSED)*.c)
SRCLIB = $(wildcard $(PREF_LIB)*.c)

OBJMENU = $(patsubst $(PREF_MENU)%.c, %.o, $(SRCMENU))
OBJINPUT = $(patsubst $(PREF_INPUT)%.c, %.o, $(SRCINPUT))
OBJOUTPUT = $(patsubst $(PREF_OUTPUT)%.c, %.o, $(SRCOUTPUT))
OBJPROCESSED = $(patsubst $(PREF_PROCESSED)%.c, %.o, $(SRCPROCESSED))
OBJLIB = $(patsubst $(PREF_LIB)%.c, %.o, $(SRCLIB))

all :
	cd $(PREF_MENU) && $(MAKE)
	cd $(PREF_INPUT) && $(MAKE)
	cd $(PREF_OUTPUT) && $(MAKE)
	cd $(PREF_PROCESSED) && $(MAKE)
	cd $(PREF_LIB) && $(MAKE)
	gcc -c main.c
	gcc -o lab4 main.o $(OBJMENU) $(OBJINPUT) $(OBJOUTPUT) $(OBJLIB) $(OBJPROCESSED) -lreadline
	rm *.o
