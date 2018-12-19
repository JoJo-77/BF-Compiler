#include "../include/tape.h"

int main()
{
	struct tape* memory = malloc(sizeof(struct tape));;
	init(memory);
	printf("%d, %d\n",memory -> size, memory -> current -> data);
}