#include "push_swap.h"
#include <stdio.h>

void print_stack(t_stack *s, char *name)
{
    t_node *cur = s->top;
    printf("%s: ", name);
    while (cur)
    {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("(size %d)\n", s->size);
}

int main(void)
{
    t_stack *a = stack_new();
    t_stack *b = stack_new();

    stack_push(a, 9);
    stack_push(a, 1);
    stack_push(a, 3);
    stack_push(a, 5);

    print_stack(a, "before");

    op_ra(a);
    print_stack(a, "after ra ");

    op_rra(a);
    print_stack(a, "after rra");

    op_pb(a, b);
    print_stack(a, "a after pb");
    print_stack(b, "b after pb");

    op_pa(a, b);
    print_stack(a, "a after pa");
    print_stack(b, "b after pa");

    stack_free(a);
    stack_free(b);
    return (0);
}