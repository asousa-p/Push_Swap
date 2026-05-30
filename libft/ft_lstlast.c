/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 23:00:40 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 23:00:41 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*find_last;

	if (!lst)
		return (NULL);
	find_last = lst;
	while (find_last->next != NULL)
		find_last = find_last->next;
	return (find_last);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head;
// 	t_list *node2;
// 	t_list *node3;

// 	head = ft_lstnew("first");
// 	node2 = ft_lstnew("second");
// 	node3 = ft_lstnew("third");
// 	head->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	printf("%s\n", ft_lstlast(head)->content);
// 	free(node3);
// 	free(node2);
// 	free(head);
// }