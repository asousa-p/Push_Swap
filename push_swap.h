#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include "libft/libft.h"

//holds data & points to next
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

//manages the chain
typedef struct s_stack
{
	t_node	*top; //pointer to the first node 
	int		size;
} t_stack;

t_stack	*stack_new(void);
void	stack_push(t_stack *s, int value);
int		stack_pop(t_stack *s);
int		stack_peek(t_stack *s);
int		stack_is_sorted(t_stack *s);
void	stack_free(t_stack *s);
int		stack_size(t_stack *s);


void	op_sa(t_stack *a);
void	op_sb(t_stack *b);
void	op_ss(t_stack *a, t_stack *b);
void	op_pa(t_stack *a, t_stack *b);
void	op_pb(t_stack *a, t_stack *b);
void	op_ra(t_stack *a);
void	op_rb(t_stack *b);
void	op_rr(t_stack *a, t_stack *b);
void	op_rra(t_stack *a);
void	op_rrb(t_stack *b);
void	op_rrr(t_stack *a, t_stack *b);


#endif
