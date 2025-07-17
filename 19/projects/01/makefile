stack: stackclient.o stackADT3.o
	gcc -o stack stackclient.o stackADT3.o -std=c99 -Wall -Werror -pedantic

stackclient.o: stackclient.c stack.h
	gcc -c stackclient.c -std=c99 -Wall -Werror -pedantic

stackADT3.o: stackADT3.c stack.h
	gcc -c stackADT3.c -std=c99 -Wall -Werror -pedantic
