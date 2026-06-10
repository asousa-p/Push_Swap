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

	if (a && a->size > 2)
	{
		first = a->top;
		second = a->top->next;
		first->next = second->next;
		second->next = first;
		a->top = second;
	}
	if (b && b->size > 2)
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

void	op_ra(t_stack *a) //if a is empty??
{
	t_node *temp;
	t_node *index;

	if(!a || a->size < 2)
	temp = a->top;
	index = a->top; //set both to top
	while (index->next != NULL) //while we are not at the last node
		index = index->next; //walk to the last node
	index->next = temp; // add old top to end of the list 
	a->top = temp->next; // temp->next is the second element and becomes new top 
	temp->next = NULL; // set last nodes next to null
	write(1, "ra\n", 3);
}

void	op_rb(t_stack *b)
{
	t_node *temp;
	t_node *index;

	if(!b || b->size < 2)
		return ;
	temp = b->top;
	index = b->top;
	while(index->next != NULL)
		index = index->next;
	index->next = temp;
	b->top = temp->next;
	temp->next = NULL;
	write(1, "rb\n", 3);
}

void	op_rr(t_stack *a, t_stack *b)
{
	t_node *temp;
	t_list *index;

	if(a && a->size > 2)
	{
		temp = a->top;
		index = a->top;
		while(index->next != NULL)
			index = index->next;
		index->next = temp;
		a->top = temp->next;
		temp->next = NULL;
	}
	if (b && b->size > 2)
	{
		temp = b->top;
		index = b->top;
		while(index->next != NULL)
			index = index->next;
		index->next = temp;
		b->top = temp->next;
		temp->next = NULL;
	}
	write(1, "rr\n", 3);
}

void	op_rra(t_stack *a)
{
	t_node *temp;
	t_node *index;

	if (!a || a->size < 2)
		return ;
	
}