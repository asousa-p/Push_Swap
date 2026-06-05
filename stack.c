#include "push_swap.h"

t_stack	*stack_new(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL; //top is the head node
	stack->size = 0; // size of the stack begins at 0
	return (stack);
}

void	stack_push(t_stack *s, int value)
{
	t_node *node; // here i create a new node

	node = malloc(sizeof(t_node)); // here i malloc new node
	if (!node) // safety if malloc fails
		return ;
	node->value = value; // set value given in parameters
	node->next = s->top; // new node points the the top of the stack passd within param
	s->top = node; // stack top becomes new node
	s->size++; // the stacks size increases by one plate
}

int		stack_pop(t_stack *s)
{
	t_node *temp;
	int val;

	temp = s->top; // when we have top must we always point to it from the stack?
	val = temp->value;
	s->top = temp->next; //i couldnt use top->next not sure if this is right...
	free(temp);
	s->size--; //decrement one because we are freeing the top node so size decreases
	return (val);
}

int		stack_peek(t_stack *s)
{
	if (!s || !s->top)
		return (0);
	return (s->top->value); // 
}

int		stack_is_sorted(t_stack *s)
{
	t_node	*current;

	current = s->top;
	while (current->next != NULL)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	stack_free(t_stack *s)
{
	if (!s)
		return ;
	while (s->top)
		stack_pop(s);
	free (s);
}
int		stack_size(t_stack *s)
{
	return(s->size);
}