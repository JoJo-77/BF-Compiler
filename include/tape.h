#include <stdlib.h>
#include <stdio.h>
#define nprint print_node();
#define lprint print_tape();
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

void destroy(struct tape* memory);