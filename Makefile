SRC = main.c 
OBJ = main.o 
CC = gcc
CPPFLAGS = 
CFLAGS = -Wall -lm


floatrep : $(OBJ)
	gcc -o floatrep $(OBJ) $(CFLAGS)

$(OBJ) : $(SRC)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $^

clean :
	rm *.o floatrep
