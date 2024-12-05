/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:15:49 by naessgui          #+#    #+#             */
/*   Updated: 2024/12/04 18:01:53 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long nbr, char format)
{
	int		count;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	if (nbr > 15)
		count += ft_puthexa(nbr / 16, format);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     ft_puthexa(123456, 'x');
// }