/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:52 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/06/20 01:09:45 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// #include <stdio.h>
// void    *to_upper(void *content)
// {
//     char    *str;
//     char    *new;
//     int     i;

//     str = (char *)content;
//     new = malloc(ft_strlen(str) + 1);
//     if (!new)
//         return (NULL);
//     i = 0;
//     while (str[i])
//     {
//         new[i] = str[i] - 32;
//         i++;
//     }
//     new[i] = '\0';
//     return (new);
// }
// static void    del(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     t_list *head;
//     t_list *new_list;

//     head = ft_lstnew("hello");
//     ft_lstadd_back(&head, ft_lstnew("world"));
//     ft_lstadd_back(&head, ft_lstnew("bye"));
//     new_list = ft_lstmap(head, to_upper, del);
//     printf("%s\n", (char *)new_list->content);
//     printf("%s\n", (char *)new_list->next->content);
//     printf("%s\n", (char *)new_list->next->next->content);
//     ft_lstclear(&new_list, del);
//     free(head->next->next);
//     free(head->next);
//     free(head);
//     return (0);
// }