/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:46:53 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/10 13:46:53 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    if (c == '\0')
        return ((char *)(s + i));
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i--;
    }
    return (NULL);
}