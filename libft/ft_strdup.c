/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 23:01:03 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 16:41:15 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s);
	s2 = malloc(i + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s, i);
	s2[i] = '\0';
	ft_memcpy(s2, s, i);
	s2[i] = '\0';
	return (s2);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *newstr;
// 	newstr = "string";
// 	printf("%s\n", ft_strdup(newstr));
// 	free(newstr);
// }
