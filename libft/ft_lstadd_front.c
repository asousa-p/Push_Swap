/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:24:06 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 23:00:27 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>

// int main(void)
// {
// 	t_list *head;
// 	t_list *node1;

// 	head = ft_lstnew("first");
// 	node1 = ft_lstnew("second");
// 	ft_lstadd_front(&head, node1);
// 	t_list *temp = node1;
// 	while (temp != NULL)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp->next;
// 	}
// }