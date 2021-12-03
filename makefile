PREF_MENU = ./menuPrintScanf/
PREF_INPUT = ./inputData/
PREF_OUTPUT = ./outputData/
PREF_LIB = ./my_lib/

SRCMENU = $(wildcard $(PREF_MENU)*.c)
SRCINPUT = $(wildcard $(PREF_INPUT)*.c)
SRCOUTPUT = $(wildcard $(PREF_OUTPUT)*.c)
SRCLIB = $(wildcard $(PREF_LIB)*.c)

OBJMENU = $(patsubst $(PREF_MENU)%.c, %.o, $(SRCMENU))
OBJINPUT = $(patsubst $(PREF_INPUT)%.c, %.o, $(SRCINPUT))
OBJOUTPUT = $(patsubst $(PREF_OUTPUT)%.c, %.o, $(SRCOUTPUT))
OBJLIB = $(patsubst $(PREF_LIB)%.c, %.o, $(SRCLIB))

lab4 : $(OBJMENU) $(OBJINPUT) $(OBJOUTPUT) $(OBJLIB)
	gcc -o lab4 $(OBJMENU) $(OBJINPUT) $(OBJOUTPUT) $(OBJLIB) -lreadline





