/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:56:46 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/10 13:56:46 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t           i;
    unsigned char   *a;

    a = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (a[i] == (unsigned char)c)
            return ((void *)s + 1);
        i++;
    }
    return (NULL);
}