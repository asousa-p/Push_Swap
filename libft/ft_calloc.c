/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:23:04 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 16:27:59 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// nmemb: # of members -- how many items
// size: size of each member
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
	{
		memory = malloc(1);
		return (memory);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	memory = malloc(total_size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total_size);
	return (memory);
}
// #include <stdio.h>
// int main(void)
// {
//     char    *str;

//     str = ft_calloc(6, sizeof(char));
//     ft_memcpy(str, "hello", 5);
//     printf("%s\n", str);  // hello
//     free(str);
// }