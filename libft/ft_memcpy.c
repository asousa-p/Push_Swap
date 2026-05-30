/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:17 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 22:04:42 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
//     char    src[6];
//     char    dst[6];

//     ft_memset(src, 'A', 5);
//     src[5] = '\0';
//     printf("%s\n", dst);

//     ft_memcpy(dst, src, 5);
//     dst[5] = '\0';
//     printf("%s\n", dst);

//     return (0);
// }
