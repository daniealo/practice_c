CC = gcc
TARGER = management
OBJT = main.o  create.o read.o printqueryresult.o checkDuplicateData.o


all : $(TARGER)

$(TARGER) : $(OBJT) 
	$(CC) -o $@ $^

printqueryresult.o  : printqueryresult.c mysql_function.h 
	$(CC) -c printqueryresult.c

checkDuplicateData.o : checkDuplicateData.c mysql_function.h 
	$(CC) -c checkDuplicateData.c

create.o : create.c crud.h mysql_function.h 
	$(CC) -c create.c

read.o : read.c crud.h mysql_function.h
	$(CC) -c read.c

	
.PHONY: clean
clean : 
	rm -f *.o $(TARGER)
