/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:34:05 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 22:34:37 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
}
// #include <stdio.h>
// void    print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }
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
//     ft_lstiter(head, print_content);
//     free(node1);
//     free(node2);
//     free(node3);
//     node1 = NULL;
//     node2 = NULL;
//     node3 = NULL;
//     return (0);
// }
