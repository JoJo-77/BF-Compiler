#include "../include/tape.h"

void init(struct tape* memory)
{
	printf("%p\n",memory);
	*memory -> current -> next = (struct node* )nullptr;
	*memory -> current -> prev = NULL;
	*memory -> current -> data = 0;
	//printf("%d\n",memory->current->data);

}

struct node* next()
{
	return NULL;	
}

struct node* prev()
{
	return NULL;	
}

struct node* add()
{
	return NULL;	
}

void destroy()
{
	//return NULL;	
}