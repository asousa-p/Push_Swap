/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:41 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 22:11:40 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// #include <stdio.h>
// int main(void)
// {
//     t_list *pony;
// 	t_list *node1;

// 	pony = ft_lstnew("hello");
// 	node1 = ft_lstnew("ola");
// 	printf("%s\n", pony->content);
// 	pony->next = node1;
// 	printf("%p\n", pony->next);
// 	free(pony);
// 	free(node1);
// 	pony = NULL;
// 	node1 = NULL;
// 	return (0);
// }