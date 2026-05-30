/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:23:16 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 16:10:14 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isalpha('a'));
//     printf("%d\n", ft_isalpha('S'));
//     printf("%d\n", ft_isalpha('0'));
// }
