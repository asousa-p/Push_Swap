/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:29:59 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 19:32:42 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("%c\n", ft_tolower('A'));
//     printf("%c\n", ft_tolower('S'));
//     printf("%c\n", ft_tolower(' '));
// }