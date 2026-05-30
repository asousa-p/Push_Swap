/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:30:10 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 16:46:15 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	big_len;

	if (!s)
		return (NULL);
	big_len = ft_strlen(s);
	if (start >= big_len)
		return (ft_strdup(""));
	if (start + len > big_len)
		len = big_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
// #include <stdio.h>
// int main()
// {
// 	char *str;
// 	str = ft_substr("hello aimee", 6, 5);
// 	printf("%s\n", str);
// }