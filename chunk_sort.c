/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:41:30 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/06/19 22:13:48 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <math.h>

static int	find_max_index(t_stack *b) // find biggest in b
{
    t_node  *tmp;
    int     max;

    tmp = b->top;
    max = tmp->index; // assume top is biggest
    while (tmp)
    {
        if (tmp->index > max) //compare nodes, if found something bigger
            max = tmp->index; //update max
        tmp = tmp->next;
    }
    return (max);
}

static void	push_chunks(t_stack *a, t_stack *b, t_bench *bench)
{
	int	chunk_size;
	int	chunk_min;
	int	chunk_max;
	int i;

	chunk_size = (int)sqrt(a->size); //how big each chunk is, cast to int so not decimal by default
	chunk_min = 0; //start of current chunk
	chunk_max = chunk_size; //end of current chunk
	while (stack_size(a)) //while a is not empty
	{
		i = 0;
		while (i < a->size) // while index is less than stack size
		{
			if (a->top->index >= chunk_min && a->top->index < chunk_max) 
				op_pb(a, b, bench); //chunk 1 push to b
			else
				op_ra(a, bench); //rotate to the bottom too big for now
			i++;
		}
		chunk_min += chunk_size; //go to next chunk once complete
		chunk_max += chunk_size; 
	}
}

static void	pull_chunks(t_stack *a, t_stack *b, t_bench *bench)
{
	int	max;

	while (stack_size(b)) //while b has content
	{
		max = find_max_index(b); // max = biggest index
		while (b->top->index != max) // while top is not biggest
			op_rb(b, bench); //rotate
		op_pa(a, b, bench); //then push back to a
	}
}

void    chunk_sort(t_stack *a, t_bench *bench)
{
	t_stack *b;

	b = stack_new(); //create stack b
	push_chunks(a, b, bench); // push chunk to b
	pull_chunks(a, b, bench); //pull back to a in the correct order
	stack_free(b); //free b
}
