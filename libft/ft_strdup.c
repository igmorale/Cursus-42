/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:11:57 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/12 11:11:57 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strdup(const char *s)
{
    char    *ptr;
    size_t  len;
    size_t  i;

    i = 0;
    len = ft_strlen(s);
    if (!s)
        return (NULL);
    ptr = malloc(sizeof(*s) * len + 1);
    if (s == NULL || ptr == NULL)
        return (NULL);
    while (s[i] && s)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = 0;
    return (ptr);

}