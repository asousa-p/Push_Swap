/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 23:00:52 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 23:00:53 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast1;
	unsigned char	*cast2;

	i = 0;
	cast1 = (unsigned char *)s1;
	cast2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cast1[i] != cast2[i])
			return (cast1[i] - cast2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int main(void)
// {
// 	char s1[10] = "hello";
// 	char s2[10] = "hella";
// 	printf("%d\n", ft_memcmp(s1, s2, 6));
// }
