/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:42:38 by igmorale          #+#    #+#             */
/*   Updated: 2024/05/01 19:42:38 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int     ft_printf(const char *str, ...);
int     ft_printchar(char c);
int     ft_printstr(char *str);
int     ft_printptr(unsigned long long ptr);
int     ft_print_unsignednum(unsigned int num);
int     ft_printdec(int num);
int     ft_print_numhex(unsigned long long num, char c);
int     ft_countnum(long long num);
void	ft_putnbr(int num);


#endif