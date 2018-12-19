#include <stdlib.h>
#include <stdio.h>

struct node
{
	char data;
	struct node* next;
	struct node* prev;
} ;

struct tape
{
	struct node * current;
	int size;
}; 



void init(struct tape* memory);

struct node* next();

struct node* prev();

struct node* add();

void destroy();