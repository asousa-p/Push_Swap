/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:34:13 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/11 19:37:10 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void	del(void *content)
{
	free(content);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*int main(void)
{
    t_list *node;
    char   *str;

    str = malloc(6 * sizeof(char));
    str[0] = 'h'; str[1] = 'e'; str[2] = 'l';
    str[3] = 'l'; str[4] = 'o'; str[5] = '\0';
    node = ft_lstnew(str);
    printf("before: %s\n", (char *)node->content);
    ft_lstdelone(node, del);
    printf("after: node freed!\n");
    return (0);
}*/