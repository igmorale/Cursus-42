/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diff_prints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:35:57 by igmorale          #+#    #+#             */
/*   Updated: 2024/05/03 19:35:57 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_printstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (ft_printstr("(null)"));
    while (str[i])
    {
        ft_printchar(str[i]);
        i++;
    }
    return (i);
}

int ft_printptr(unsigned long long ptr)
{
    int i;

    i = 0;
    i += ft_printstr("0x");
    i += ft_print_numhex(ptr, 'x');
    return (i);
}

int ft_print_unsignednum(unsigned int num)
{
    int i;

    i = 0;
    if (num >= 10)
        i += ft_print_unsignednum(num/10);
    ft_printchar(num % 10 + '0');
    i++;
    return (i);
}

int ft_printdec(int num)
{
    long int    i;

    i = 0;
    ft_putnbr(num);
    if (num >= 0)
        return (ft_countnum(num));
    i = (long int)num * (-1);
    return (ft_countnum(i) + 1);
}

int ft_print_numhex(unsigned long long num, char c)
{
    unsigned long long  i;

    i = 0;
    if (num >= 16)
        i += ft_print_numhex(num / 16, c);
    if (c == 'x')
        ft_printchar("0123456789abcdef"[num % 16]);
    if (c == 'X')
        ft_printchar("0123456789ABCDEF"[num % 16]);
    i++;
    return (i);
    
}