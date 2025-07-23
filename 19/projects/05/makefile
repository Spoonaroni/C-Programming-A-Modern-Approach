queue: queueclient.o queueADT.o
	gcc -o queue queueclient.o queueADT.o -std=c99 -Wall -Werror -pedantic

queueclient.o: queueclient.c queueADT.h
	gcc -c queueclient.c -std=c99 -Wall -Werror -pedantic

queueADT.o: queueADT.c queueADT.h
	gcc -c queueADT.c -std=c99 -Wall -Werror -pedantic
