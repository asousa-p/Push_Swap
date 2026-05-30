/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:31:32 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 19:43:59 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i >= n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void)
// {
//     printf("%d\n", ft_strncmp("abcdfjgsehf", "abcdfhsgfa", 4));
//     printf("%d\n", ft_strncmp("hello", "world", 1)); // negative
//     printf("%d\n", ft_strncmp("world", "hello", 1)); // positive
//     printf("%d\n", ft_strncmp("hello", "hello", 0)); // 0
// }

// int main(int argc, char **argv)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		n;

// 	if (argc != 4)
// 		return (0);
// 	s1 = argv[1];
// 	s2 = argv[2];
// 	n = atoi(argv[3]);
// 	printf("strncmp:    %s vs %s = %d\n", s1, s2, strncmp(s1, s2, n));
// 	printf("ft_strncmp: %s vs %s = %d\n", s1, s2, ft_strncmp(s1, s2, n));
// }
