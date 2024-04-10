/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:00:48 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/10 14:00:48 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t          i;
    unsigned char   *c1;
    unsigned char   *c2;

    c1 = (unsigned char *)s1;
    c2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (c1[i] == c2[i])
            i++;
        else
            return (c1[i] - c2[i]);
    }
    return (0);
}