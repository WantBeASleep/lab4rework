SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

all :
	gcc -c $(SRC)
	mv $(OBJ) ../