/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:21:10 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 16:03:51 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
// #include <stdio.h>
// int main(void)
// {
//     char    buffer[6];
//     int     i;

//     ft_bzero(buffer, 5);
//     i = 0;
//     while (i < 5)
//     {
//         printf("%d\n", buffer[i]);  // 0 0 0 0 0
//         i++;
//     }
//     return (0);
// }
