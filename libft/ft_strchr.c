/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:32:22 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 21:52:25 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "hello world";
// 	char *result;

// 	result = ft_strchr(str, 'w');
// 	printf("for w: %s\n", result);

// 	result = ft_strchr(str, 'z');
// 	printf("for z: %s\n", result);

// 	result = ft_strchr(str, '\0');
// 	printf("for '\\0': %p\n", result);

// 	result = ft_strchr(str, 'l');
// 	printf("for first l: %s\n", result);
// }
