CC = gcc
TARGER = fac_table
OBJT = factorial_table.o

all : $(TARGER)

$(TARGER) : $(OBJT)
	$(CC) -o $@ $^

.PHONY: clean
clean : 
	rm -f *.o $(TARGER)

