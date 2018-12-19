#include "../include/tape.h"

int main()
{
	struct tape* memory = malloc(sizeof(struct tape));;
	printf("%p\n",memory);
	init(memory);
	printf("%p\n",memory);
}