/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:58:31 by naessgui          #+#    #+#             */
/*   Updated: 2024/12/02 20:27:13 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
		count += ft_putchar(n + 48);
	else
	{
		count += ft_putunsigned(n / 10);
		count += ft_putunsigned(n % 10);
	}
	return (count);
}
// #include <stdio.h>

// int main()
// {
//     ft_putunsigned(123);
// }