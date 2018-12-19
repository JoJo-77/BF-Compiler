#include "../include/tape.h"

struct node* head;

void init(struct tape* memory)
{
	memory -> current = malloc(sizeof(struct node));
	memory -> current -> data = 20;
	memory -> size = 0; 
	head = memory -> current;
}

struct node* next(struct tape* memory)
{
	if(memory->current->next == NULL)
	{
		
	}

}

struct node* prev()
{
	return NULL;	
}

void destroy(struct tape* memory)
{
	//return NULL;	
}