/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:32:12 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 20:02:56 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = malloc(s1len + s2len + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, s1len);
	ft_memcpy(result + s1len, s2, s2len);
	result[s1len + s2len] = '\0';
	return (result);
}

// // ___________
// // hello
// //      world
// //           \0
// #include <stdio.h>
// int main ()
// {
// 	char s1[] = "hello";
// 	char s2[] = "world";
// 	char *snew;
// 	snew = ft_strjoin(s1, s2);
// 	printf("%s", snew);
// }