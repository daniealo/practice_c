CC = gcc
TARGER = management
OBJT = main.o create.o read.o update.o delete.o struct.o


all : $(TARGER)

$(TARGER) : $(OBJT) 
	$(CC) -o $@ $^

create.o : create.c crud.h struct.h
	$(CC) -c create.c

read.o : read.c crud.h struct.h
	$(CC) -c read.c

update.o : update.c crud.h struct.h
	$(CC) -c update.c

delete.o : delete.c crud.h struct.h
	$(CC) -c delete.c

struct.o : struct.c struct.h
	$(CC) -c struct.c

.PHONY: clean
clean : 
	rm -f *.o $(TARGER)
