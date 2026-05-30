/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:33:24 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 22:11:02 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "hello world";
//     char    *result;

//     result = ft_memchr(str, 'l', 5);
//     printf("%s\n", result); 

//     result = ft_memchr(str, 'w', 3);
//     if (result == NULL)
//         printf("not found!\n"); 
//     result = ft_memchr(str, '\0', 12);
//     printf("%p\n",
//     (void *)result);
//     return (0);
// }