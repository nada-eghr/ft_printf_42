/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:57:11 by naessgui          #+#    #+#             */
/*   Updated: 2024/12/05 12:38:06 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthexa(va_arg(args, unsigned int), c);
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_puthexa(va_arg(args, unsigned long), 'x');
	}
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	i = 0;
	
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' )  
		{
			if (s[i + 1])
			{
				i++;
				count += ft_check(args, s[i]);
			}
		}
		else
			count += ft_putchar((char)s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
#include <fcntl.h>
#include <stdio.h>


int main(void)
{
	printf(NULL);

}