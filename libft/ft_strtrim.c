/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 23:03:28 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 23:03:39 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
// #include <stdio.h>
// int main(void)
// {
// 	char *str;
// 	str = ft_strtrim("xxhelloxx", "x");
// 	printf("%s\n", str);

// }