/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:54:09 by igmorale          #+#    #+#             */
/*   Updated: 2024/05/04 02:54:09 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}


char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)(s + 1));
    return (NULL);
}

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;

    ptr = (void *)malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

void    *ft_bzero(void *s, size_t n)
{
    unsigned char   *p;
    size_t          i;

    i = 0;
    p = (unsigned char *) s;
    while (i < n)
    {
        p[i] = ;    //No lo entiendo
        i++;
    }
}

char    *ft_strjoin(const char *str1, const char *str2)
{
    char    *ptr;
    int     i;
    int     j;

    if (!str1 || !str2)
        return (NULL);
    ptr = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
    if (!ptr)
        return (NULL);
    i = -1;
    while (str1[++i])
        ptr[i] = str1[i];
    j = -1;
    while (str2[++j])
        ptr[i + j] = str2[j];
    ptr[i + j] = 0;
    return (ptr);
}