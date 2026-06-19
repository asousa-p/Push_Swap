#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
}   t_node;

typedef struct s_stack
{
    t_node  *top;
    int     size;
}   t_stack;

typedef enum e_strategy
{
    ADAPTIVE,
    SIMPLE,
    MEDIUM,
    COMPLEX
}   t_strategy;

typedef struct s_opts
{
    t_strategy  strategy;
    int         bench;
}   t_opts;

typedef struct s_bench
{
    int sa;
    int sb;
    int ss;
    int pa;
    int pb;
    int ra;
    int rb;
    int rr;
    int rra;
    int rrb;
    int rrr;
}   t_bench;

t_stack *stack_new(void);
void    stack_push(t_stack *s, int value, int index);
t_node  stack_pop(t_stack *s);
int     stack_peek(t_stack *s);
int     stack_peek_index(t_stack *s);
int     stack_is_sorted(t_stack *s);
void    stack_free(t_stack *s);
int     stack_size(t_stack *s);

void    op_sa(t_stack *a, t_bench *bench);
void    op_sb(t_stack *b, t_bench *bench);
void    op_ss(t_stack *a, t_stack *b, t_bench *bench);
void    op_pa(t_stack *a, t_stack *b, t_bench *bench);
void    op_pb(t_stack *a, t_stack *b, t_bench *bench);
void    op_ra(t_stack *a, t_bench *bench);
void    op_rb(t_stack *b, t_bench *bench);
void    op_rr(t_stack *a, t_stack *b, t_bench *bench);
void    op_rra(t_stack *a, t_bench *bench);
void    op_rrb(t_stack *b, t_bench *bench);
void    op_rrr(t_stack *a, t_stack *b, t_bench *bench);

void    chunk_sort(t_stack *a, t_bench *bench);

void	adaptive_sort(t_stack *a, t_bench *bench);

void	write_bench(t_bench *bench, double disorder, t_opts *opts);

#endif
