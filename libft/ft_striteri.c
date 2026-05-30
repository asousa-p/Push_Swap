/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 23:01:31 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 23:01:32 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = (ft_toupper(*c));
// }
// #include <stdio.h>
// int main(void)
// {
// 	char *res;

// 	res = ft_strdup("hello");
// 	printf("%s\n", res);
// 	ft_striteri(res, to_upper);
// 	printf("%s\n", res);
// }