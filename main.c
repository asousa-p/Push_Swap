/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsleepp <xsleepp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:46:13 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/06/25 22:54:14 by xsleepp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
    t_stack	*a;
    t_opts	opts;
	t_bench	*bench;
	double	disorder; //compute disorder is a double return type
	
	bench = malloc(sizeof(t_bench)); //pointer needs memory
	if (!bench)
		return (1);
	ft_memset(bench, 0, sizeof(t_bench));
	a = parse_args(ac, av, bench);
	if (!a)
	{
		free(bench);
		return (0); //ran successfully just without parameters
	}
	disorder = compute_disorder(a);
	opts.strategy = ADAPTIVE;
	opts.bench = 0;
	parse_flags(ac, av, &opts, a, bench);
	if (opts.bench == 0)
	{
		free(bench);
		bench = NULL;
	}
	if (opts.strategy == ADAPTIVE)
		adaptive_sort(a, bench);
    if (opts.strategy == SIMPLE)
		bubble_sort(a, bench);
	if (opts.strategy == MEDIUM)
		chunk_sort(a, bench);
	if (opts.strategy == COMPLEX)
		radix_sort(a, bench);
	if (opts.bench == 1) //if user passes --bench
		write_bench(bench, disorder, &opts); //but why '&' on opts and not bench that is also a pointer?
	stack_free(a); // parse_args → create_stack → stack = malloc(sizeof(t_stack))
	free(bench); 
	return (0);
}
