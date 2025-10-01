CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

times: times.o readline.o
	$(CC) -o times times.o readline.o $(CFLAGS)

times.o: times.c readline.h
	$(CC) -c times.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
