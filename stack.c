#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

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

void stack_push(t_stack *s, int value, int index)
{
    t_node *node;
    node = malloc(sizeof(t_node));
    if (!node)
        return ;
    node->value = value;
    node->index = index;
    node->next = s->top;
    s->top = node;
    s->size++;
}

t_node stack_pop(t_stack *s)
{
    t_node  result;
    t_node  *temp;

	if (!s || !s->top)  // safety check added
    {
        result.value = 0;
        result.index = 0;
        result.next = NULL;
        return (result);
    }
    temp = s->top; //preserve top 
    result.value = temp->value;
    result.index = temp->index;  // save index before freeing
    s->top = temp->next;
    free(temp);
    s->size--;
    return (result);  // return the whole node by value
}

int		stack_peek(t_stack *s)
{
	if (!s || !s->top)
		return (0);
	return (s->top->value);
}
int     stack_peek_index(t_stack *s)  //new helper
{
    if (!s || !s->top)
        return (0);
    return (s->top->index);
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