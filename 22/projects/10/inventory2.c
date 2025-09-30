/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* inventory2.c (Chapter 17, page 434) */
/* Maintains a parts database (linked list version) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	struct part *next;
};

struct part *inventory = NULL;

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int dump(void);
int restore(void);

/********************★**********************************★**
* main: Prompts the user to enter an operation code, 	  *
* 		then calls a function to perform the requested 	  *
* 		action. Repeats until the user enters the 		  *
* 		command ’q’. Prints an error message if the user  *
* 		enters an illegal code. 						  *
**********************************************************/
int main(void)
{
	char code;

	for (;;) {
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while (getchar() != '\n')	/* skips to the end of the line */
			;
		switch (code) {
			case 'i': insert();
					  break;
			case 's': search();
					  break;
			case 'u': update();
					  break;
			case 'p': print();
					  break;
			case 'd': dump();
					  break;
			case 'r': restore();
					  break;
			case 'q': return 0;
			default: printf("Illegal code\n");
		}
		printf("\n");
	}
}

struct part *find_part(int number)
{
	struct part *p;

	for (p = inventory;
		p != NULL && number > p->number;
		p = p->next)
		;
	if (p != NULL && number == p->number)
		return p;
	return NULL;
}

void insert(void)
{
	struct part *cur, *prev, *new_node;

	new_node = malloc(sizeof(struct part));
	if (new_node == NULL) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &new_node->number);

	for (cur = inventory, prev = NULL;
		cur != NULL && new_node->number > cur->number;
		prev = cur, cur = cur->next)
		;
	if (cur != NULL && new_node->number == cur->number) {
		printf("Part already exists.\n");
		free(new_node);
		return;
	}

	printf("Enter part name: ");
	read_line(new_node->name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &new_node->on_hand);

	new_node->next = cur;
	if (prev == NULL)
		inventory = new_node;
	else
		prev->next = new_node;
}

void search(void)
{
	int number;
	struct part *p;

	printf("Enter part number: ");
	scanf("%d", &number);
	p = find_part(number);
	if (p != NULL) {
		printf("Part name: %s\n", p->name);
		printf("Quantity on hand: %d\n", p->on_hand);
	} else
		printf("Part not found.\n");
}

void update(void)
{
	int number, change;
	struct part *p;

	printf("Enter part number: ");
	scanf("%d", &number);
	p = find_part(number);
	if (p != NULL) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change); 
		p->on_hand += change;
	} else
		printf("Part not found.\n");
}

void print(void)
{
	struct part *p;

	printf("Part Number   Part Name                  "
           "Quantity on Hand\n");
    for (p = inventory; p != NULL; p = p->next)
        printf("%7d     %-25s%11d\n", p->number, p->name, p->on_hand);
}

int dump(void)
{
	FILE *fp;
	char filename[NAME_LEN];
	struct part *p;
	
	printf("Enter name of output file: ");
	read_line(filename, NAME_LEN);

	if ((fp = fopen(filename, "wb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", filename);
		return -1;
	}

	for (p = inventory; p != NULL; p = p->next) {
		fwrite(&p->number, sizeof(int), 1, fp);
		fwrite(&p->name, sizeof(p->name), 1, fp);
		fwrite(&p->on_hand, sizeof(int), 1, fp);
	}

	fclose(fp);
	return 0;
}

int restore(void)
{
	FILE *fp;
	char filename[NAME_LEN];
	struct part *new_node, *prev = NULL;
	int number;
	char name[NAME_LEN];
	int on_hand;

	printf("Enter name of input file: ");
	read_line(filename, NAME_LEN);

	if ((fp = fopen(filename, "rb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", filename);
		return -1;
	}

	while (inventory) {
		struct part *tmp = inventory;
		inventory = inventory->next;
		free(tmp);
	}
	inventory = NULL;

	while (fread(&number, sizeof(int), 1, fp) == 1 &&
			fread(&name, sizeof(char), (NAME_LEN+1), fp) == (NAME_LEN+1) &&
			fread(&on_hand, sizeof(int), 1, fp) == 1) {

		new_node = malloc(sizeof(struct part));
		if (new_node == NULL) {
			printf("Database is full; can't add more parts.\n");
			fclose(fp);
			return -1;
		}
		new_node->number = number;
		strncpy(new_node->name, name, strlen(name));
		new_node->on_hand = on_hand;
		new_node->next = NULL;

		if (prev == NULL) {
			inventory = new_node;
		} else {
			prev->next = new_node;
		}
		prev = new_node;
	}

	fclose(fp);
	return 0;
}
