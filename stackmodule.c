#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
	int data;
	Node* prev;
};

void stack_push(Node** top, int d)
{
	Node* node;
	node = malloc(sizeof(Node));

	node->data = d;
	if (*top != NULL)
		node->prev = *top;
	else
		node->prev = NULL;

	*top = node;
}

int stack_pop(Node** top)
{
	int n = (*top)->data;
	Node* node;
	node = *top;

	*top = (*top)->prev;
	free(node);

	return n;
}

void print_stack(Node* top)
{
	if (top != NULL)
	{
		printf("%i ",top->data);
		print_stack(top->prev);
	}
}
