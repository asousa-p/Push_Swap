/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:02 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 16:38:22 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memory, value, len
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int main(void)
// {
//     char    buffer[6];
//     int     i;

//     ft_memset(buffer, 'A', 5);
//     buffer[5] = '\0';
//     printf("%s\n", buffer);
//     ft_memset(buffer, 'Z', 3);
//     printf("%s\n", buffer);
// }