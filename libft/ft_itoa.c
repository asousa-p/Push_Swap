/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:23:43 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/13 21:18:48 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int number)
{
	int	len;

	len = 0;
	if (number <= 0)
	{
		len++;
		number = -number;
	}
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		nlen;
	int		is_neg;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = ft_count(n);
	is_neg = (n < 0);
	if (is_neg)
		n = -n;
	res = malloc(sizeof(char) * (nlen + 1));
	if (!res)
		return (NULL);
	res[nlen--] = '\0';
	if (n == 0)
		res[0] = '0';
	while (n > 0)
	{
		res[nlen--] = (n % 10) + '0';
		n /= 10;
	}
	if (is_neg)
		res[0] = '-';
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	int n = 42;
// 	char *str = ft_itoa(n);

// 	printf("%s\n", str);
// 	free(str);
// }