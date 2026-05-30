/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 22:25:00 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 16:51:38 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;

	if (!*little)
		return ((char *)big);
	big_i = 0;
	little_i = 0;
	while (big[big_i] && big_i < len)
	{
		while (big[big_i + little_i] == little[little_i]
			&& big_i + little_i < len)
		{
			little_i++;
			if (little[little_i] == '\0')
				return ((char *)big + big_i);
		}
		little_i = 0;
		big_i++;
	}
	return (NULL);
}
// #include <stdlib.h>
// #include <bsd/string.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	int		len;
// 	char	*little;
// 	char	*big;
// 	char	*ft_out;
// 	char	*out;

// 	if (argc != 4)
// 		return (0);
// 	big = argv[1];
// 	if (!strcmp(argv[1], "NULL"))
// 		big = NULL;
// 	little = argv[2];
// 	if (!strcmp(argv[2], "NULL"))
// 		little = NULL;
// 	len = atoi(argv[3]);
// 	printf("----------\n");
// 	printf("big: %s (%p)\n", big, (void *)big);
// 	printf("little: %s\n", little);
// 	printf("len: %d\n", len);
// 	printf("----------\n");
// 	out = strnstr(big, little, len);
// 	ft_out = ft_strnstr(big, little, len);
// 	printf("strnstr output:    %s (%p)\n", out, (void *)out);
// 	printf("ft_strnstr output: %s (%p)\n", ft_out, (void *)ft_out);
// }
