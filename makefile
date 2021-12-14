PREF_MENU = ./menuPrintScanf/
PREF_INPUT = ./inputData/
PREF_OUTPUT = ./outputData/
PREF_PROCESSED = ./processedData/
PREF_SORT = ./sort/
PREF_TIME = ./times/
PREF_LIB = ./my_lib/

SRCMENU = $(wildcard $(PREF_MENU)*.c)
SRCINPUT = $(wildcard $(PREF_INPUT)*.c)
SRCOUTPUT = $(wildcard $(PREF_OUTPUT)*.c)
SRCPROCESSED = $(wildcard $(PREF_PROCESSED)*.c)
SRCSORT = $(wildcard $(PREF_SORT)*.c)
SRCTIME = $(wildcard $(PREF_TIME)*.c)
SRCLIB = $(wildcard $(PREF_LIB)*.c)

OBJMENU = $(patsubst $(PREF_MENU)%.c, %.o, $(SRCMENU))
OBJINPUT = $(patsubst $(PREF_INPUT)%.c, %.o, $(SRCINPUT))
OBJOUTPUT = $(patsubst $(PREF_OUTPUT)%.c, %.o, $(SRCOUTPUT))
OBJPROCESSED = $(patsubst $(PREF_PROCESSED)%.c, %.o, $(SRCPROCESSED))
OBJSORT = $(patsubst $(PREF_SORT)%.c, %.o, $(SRCSORT))
OBJTIME = $(patsubst $(PREF_TIME)%.c, %.o, $(SRCTIME))
OBJLIB = $(patsubst $(PREF_LIB)%.c, %.o, $(SRCLIB))

all :
	cd $(PREF_MENU) && $(MAKE)
	cd $(PREF_INPUT) && $(MAKE)
	cd $(PREF_OUTPUT) && $(MAKE)
	cd $(PREF_PROCESSED) && $(MAKE)
	cd $(PREF_LIB) && $(MAKE)
	cd $(PREF_SORT) && $(MAKE)
	cd $(PREF_TIME) && $(MAKE)
	gcc -c main.c
	gcc -o lab4 main.o $(OBJMENU) $(OBJINPUT) $(OBJOUTPUT) $(OBJLIB) $(OBJPROCESSED) $(OBJSORT) $(OBJTIME) -lreadline
	rm *.o
