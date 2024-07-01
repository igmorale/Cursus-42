/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 03:08:34 by igmorale          #+#    #+#             */
/*   Updated: 2024/07/01 11:14:31 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	size_t	i;

	c = (char *)s;
	i = 0;
	if (!s || !f)
		return (NULL);
	c = (char *)malloc(ft_strlen(s) + 1);
	if (!c)
		return (NULL);
	while (i < ft_strlen(s))
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
