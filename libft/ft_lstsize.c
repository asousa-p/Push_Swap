/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:33 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 22:12:59 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	if (!lst)
		return (0);
	size = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
// #include <stdio.h>
// int main(void)
// {
//     t_list *head;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     node1 = ft_lstnew("hello");
//     node2 = ft_lstnew("world");
//     node3 = ft_lstnew("bye");
//     head = node1;
//     head->next = node2;
//     node2->next = node3;
//     printf("size: %d\n", ft_lstsize(head));
//     free(node1);
//     free(node2);
//     free(node3);
//     node1 = NULL;
//     node2 = NULL;
//     node3 = NULL;
//     return (0);
// }