#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main (void)
{
	Node** stack;
	stack = malloc(sizeof(Node*));
	*stack = NULL;

	
	for (int i = 0; i < 10; ++i)
		stack_push(stack, i);
	
	print_stack(*stack);
	printf("\n");
	
	printf("Poping stack once %i\n", stack_pop(stack));

	return 0;
}

