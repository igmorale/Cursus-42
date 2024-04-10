/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:06:57 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/10 14:06:57 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned long   i;
    int             j;

    j = 0;
    i = 0;
    if (!*needle)
        return ((char *)haystack);
    while (haystack[i])
    {
        j = 0;
        while (haystack[i] == needle[j] && haystack[i] && i < len)
        {
            i++;
            j++;
        }
        if (!needle[j])
            return ((char *)&haystack[i - j]);
        i = (i - j) + 1;
    }
    return (NULL);
}