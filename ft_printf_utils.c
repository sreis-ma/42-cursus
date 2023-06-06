/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:36:37 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/06/06 18:52:06 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (0);	
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	long	n;
	int		count;

	n = nb;
	count = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n % 10);
		count += ft_putnbr(n / 10);
	}
	if (n < 10)
		count += ft_putchar(n + 48);
	return (count);
}