/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:35:31 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/12 11:35:31 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    int     i;
    int     j;

    if (!s1 || !s2)
        return (NULL);
    ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!ptr)
        return (NULL);
    i = -1;
    while (s1[++i])
        ptr[i] = s1[i];
    j = -1;
    while (s2[++j])
        ptr[i + j] = s2[j];
    ptr[i + j] = 0;
    return (ptr);
}
