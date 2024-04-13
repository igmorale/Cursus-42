/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:02:29 by igmorale          #+#    #+#             */
/*   Updated: 2024/04/12 11:02:29 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}