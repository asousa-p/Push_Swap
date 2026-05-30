/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:32:32 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 21:57:26 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		in_word;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**fill_array(char const *s, char c, char **array)
{
	size_t	i;
	size_t	start;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			array[word++] = ft_substr(s, start, i - start);
	}
	array[word] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc ((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	fill_array(s, c, array);
	return (array);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	char to_split[] = "joao_hugo_daniel_aimee";
// 	char **split;
// 	split = ft_split(to_split, '_');
// 	printf("to_split = %s\n\n", to_split);
// 	for(int i = 0; i < count_words(to_split, '_'); i++)
// 	{
// 		printf("split[%d] = %s\n", i, split[i]);
// 	}
// 	while (i < count_words(to_split, '_'))
// 	{
// 		free(split[i]);
// 		i++;
// 	}
// 	free(split);
// }