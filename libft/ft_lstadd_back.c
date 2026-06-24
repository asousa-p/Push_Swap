/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:23:59 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/06/20 00:55:52 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*last_node;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = *lst;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head;
// 	t_list *node1;

// 	head = ft_lstnew("first");
// 	node1 = ft_lstnew("second");
// 	ft_lstadd_back(&head, node1);
// 	t_list *temp = node1;
// 	while (temp != NULL)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp->next;
// 	}
// }