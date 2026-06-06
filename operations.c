#include "push_swap.h"

void	op_sa(t_stack *a)
{
	t_node *first;
	t_node *second;

	if (!a || a->size < 2)
		return ;
	first = a->top;
	second = a->top->next;
	first->next = second->next; // skip one by making first next equal seconds next
	second->next = first; // second points to first 
	a->top = second; // second becomes top
	write(1, "sa\n", 3);
}

void	op_sb(t_stack *b)
{
	t_node *first;
	t_node *second;

	if (!b || b->size < 2)
		return;
	first = b->top;
	second = b->top->next;
	first->next = second->next;
	second->next = first;
	b->top = second;
	write(1, "sb\n", 3);
}

void	op_ss(t_stack *a, t_stack *b)
{
	t_node *first;
	t_node *second;

	if (a && a->size < 2)
	{
		first = a->top;
		second = a->top->next;
		first->next = second->next;
		second->next = first;
		a->top = second;
	}
	if (b && b->size < 2)
	{
		first = b->top;
		second = b->top->next;
		first->next = second->next;
		second->next = first;
		b->top = second;
	}
	write(1, "ss\n", 3);
}

void	op_pa(t_stack *a, t_stack *b) //push to a
{
	int	val;

	if (!b || stack_size(b) == 0)
		return ;
	val = stack_pop(b);
	stack_push(a, val);
	write(1, "pa\n", 3);
}

void	op_pb(t_stack *a, t_stack *b)
{
	int val;

	if (!a || stack_size(a) == 0)
		return ;
	val = stack_pop(a);
	stack_push(b, val);
	write(1, "pb\n", 3);
}