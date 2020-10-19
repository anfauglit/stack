typedef struct node Node;

struct node {
	int data;
	Node* prev;
};

void stack_push(Node** top, int d);
int stack_pop(Node** top);
void print_stack(Node* top);
