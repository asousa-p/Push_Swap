/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:31:24 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 19:44:26 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// char	to_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (ft_toupper(c));
// }
// int main(void)
// {
// 	char    *result;

// 	result = ft_strmapi("hello", to_upper);
// 	printf("%s\n", result);
// 	free(result);
// 	result = NULL;
// 	return (0);
// }