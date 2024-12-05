/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:59:53 by naessgui          #+#    #+#             */
/*   Updated: 2024/12/05 12:02:36 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int multiplication( int count, ...)
{
    int i ;
    va_list args;
    int mult = 1;
    va_start(args, count);

    i = 0;
    while ( i < count )
    {
        mult *= va_arg( args, int);
        i++;
    }
    va_end(args);
    return mult;
}

int main()
{
    ft_printf("multiplication is : %d\n", multiplication(3, 1,2));
}