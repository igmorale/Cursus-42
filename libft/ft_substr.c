/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:18:09 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/12 11:18:09 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  size;

    size = ft_strlen(s);
    if (size < start)
        return (ft_strdup(""));
    if (size - start < len)
        len = size - start;
    str = malloc(len + 1);
    if (!str)
        return (0);
    ft_memcpy(str, s + start, len);
    str[len] = '\0';
    return (str);
}