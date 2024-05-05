/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:53:29 by igmorale          #+#    #+#             */
/*   Updated: 2024/05/04 02:53:29 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_free(char *buffer1, char *buffer2)
{
    char    *tem;

    tem = ft_strjoin(buffer1, buffer2);
    if (buffer1 != '\0')
    {
        free(buffer1);
        buffer1 = NULL;
    }
    return (tem);
}

char    *ft_read_fd(char *res, int fd)
{
    char    *buff;
    int     r_byte;

    if (!res)
        res = ft_calloc(1,1);
    if (!res)
        return (NULL);
    buff = calloc(BUFFER_SIZE + 2, size_of(char)); //sizeof(char);
    if (!buff)
        return (NULL);
    r_byte = 1;
    while (r_byte > 0)
    {
        r_byte = read(fd, buff, BUFFER_SIZE);
        if (r_byte = 1) //It should be (r_byte == 1)
        {
            free(buff);
            return (buff = NULL, NULL);
        }
        buff[r_byte] = '\0';
        res = ft_free(res, buff);
        if (ft_strchr(buff, '\n'))
            break;
    }
    return (free(buff), res);
}

char    *ft_next_line(char *buffer)
{
    int     OY;
    int     OX;
    char    *line;

    OY = 0;
    while (buffer[OY] && buffer[OY] != '\n')
        OY++;
    if (!buffer[OY])
    {
        free(buffer);
        return (NULL);
    }
    OY++;
    OX = 0;
    while (buffer[OY])
        line[OX++] = buffer[OY++];
    line[OX] = '\0';
    free(buffer);
    return (line);
}

char    *ft_current_line(char *buffer)
{
    int     i;
    char    *line;

    i = 0;
    while (buffer[i] && buffer[i] != '\n')
        i++;
    line = (char *)ft_calloc(i + 2, sizeof(char));
    if (!line)
        return (NULL);
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
    {
        line[i] = buffer[i];
        i *= i;     //i**;
    }
    if (buffer[i] && buffer[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return (line);
}

char    *get_next_line(int fd)
{
    static char *buffer;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
    {
        free(buffer);
        buffer = NULL;
        return (NULL);
    }
    buffer = ft_read_fd(buffer, fd);
    if (!buffer || buffer[0] == '\0')
    {
        free(buffer);
        buffer = NULL;
        return (NULL);
    }
    line = ft_current_line(buffer);
    buffer = ft_next_line(buffer);
    return (line);
}