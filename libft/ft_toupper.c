/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:29:53 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/12 19:32:32 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("%c\n", ft_toupper('a'));
//     printf("%c\n", ft_toupper('h'));
//     printf("%c\n", ft_toupper('5'));
// }