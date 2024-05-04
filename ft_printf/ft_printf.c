/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:40:37 by igmorale          #+#    #+#             */
/*   Updated: 2024/05/01 19:40:37 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_find_format(char const *str, int i, va_list *var_args)
{
    char    c;

    c = 0;
    if (str[i] == 'c')
        c += ft_printchar(va_arg(*var_args, int));
    else if (str[i] == 's')
        c += ft_printstr(va_arg(*var_args, char*));
    else if (str[i] == 'p')
        c += ft_printptr(va_arg(*var_args, unsigned long long));
    else if (str[i] == 'u')
        c += ft_print_unsignednum(va_arg(*var_args, unsigned int));
    else if (str[i] == 'd' || str[i] == 'i')
        c += ft_printdec(va_arg(*var_args, int));
    else if (str[i] == 'X' || str[i] == 'x')
        c += ft_print_numhex(va_arg(*var_args, unsigned int), str[i]);
    else if (str[i] == '%')
        c += ft_printchar('%');
    return (c);
    


}

int    ft_printf(const char *str, ...)
{
    va_list var_args;
    int     i;
    int     j;

    i = 0;
    j = 0;
    va_start(var_args, str);
    while (str[i])
    {
        if (str[i] != '%')
            j += ft_printchar(str[i]);
        else
        {
            i++;
            j += ft_find_format(str, i, &var_args);
        }
        i++;
    }
    va_end(var_args);
    return(j);
}
