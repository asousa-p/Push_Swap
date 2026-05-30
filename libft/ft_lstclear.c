/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:34:19 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 22:42:37 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
// #include <stdio.h>
// int main(void)
// {
//     t_list  *head;
//     char    *s1;
//     char    *s2;
//     char    *s3;

// 	s1 = ft_strdup("hello");
// 	s2 = ft_strdup("world");
// 	s3 = ft_strdup("bye");
//     head = ft_lstnew(s1);
//     ft_lstadd_back(&head, ft_lstnew(s2));
//     ft_lstadd_back(&head, ft_lstnew(s3));
//     printf("before: %s %s %s\n", 
// 	(char *)head->content, 
// 	(char *)head->next->content, (char *)head->next->next->content);
//     ft_lstclear(&head, del);
//     printf("after: head is %s\n", head == NULL ? "NULL" : "not NULL");
//     return (0);
// }