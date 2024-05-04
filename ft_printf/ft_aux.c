/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igmorale <igmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:07:56 by igmorale          #+#    #+#             */
/*   Updated: 2024/05/04 02:07:56 by igmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_countnum(long long num)
{
    int i;

    i = 0;
    while (num >= 10)
    {
        i++;
        num /= 10;
    }
    return (i + 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		ft_printchar('-');
		num *= -1;
	}
	if (num >= 0 && num <= 9)
		ft_printchar(num + 48);
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}