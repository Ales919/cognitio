CC = g++
CFLAGS = -g

all: main

composer.o:      composer.h composer.cpp
	$(CC) $(CFLAGS) -c composer.cpp

database.o:      database.h database.cpp
	$(CC) $(CFLAGS) -c database.cpp

Database:    domposer.o database.o
	$(CC) $(CFLAGS) composer.o database.o main.cpp -o main

clean:
	rm -f core *.o *~
	
