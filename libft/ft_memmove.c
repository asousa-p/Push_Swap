/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:10 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 21:30:08 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s && d < s + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
//     char    buffer[10];

//     ft_memset(buffer, 'A', 9);
//     buffer[9] = '\0';
//     printf("before: %s\n", buffer);
//     ft_memmove(buffer + 3, buffer, 6);
//     buffer[9] = '\0';
//     printf("after: %s\n", buffer);     
//     return (0);
// }
// #include <stdio.h>
// int main(void)
// {
//     char    buffer[10];

//     ft_memset(buffer, 'A', 9);
//     buffer[9] = '\0';
//     printf("before: %s\n", buffer);
//     ft_memmove(buffer + 3, buffer, 6);
//     buffer[9] = '\0';
//     printf("after: %s\n", buffer);     
//     return (0);
// }