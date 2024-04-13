/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 02:12:21 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/13 02:12:21 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_numlen(int num)
{
    int i;

    i = 0;
    if (num <= 0)
        i++;
    while (num)
    {
        i++;
        num = num / 10;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *ptr;
    int     i;
    long    number;

    i = ft_numlen(n);
    number = n;
    ptr = malloc(sizeof(char) * (i + 1));
    if (!ptr)
        return (NULL);
    if (number < 0)
    {
        ptr[0] = '-';
        number = -number;
    }
    if (number == 0)
        ptr[0] = '0';
    ptr[i--] = '\0';
    while (number)
    {
        ptr[i] = (number % 10) + '0';
        i--;
        number = number / 10;
    }
    return (ptr);
}