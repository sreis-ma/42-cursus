/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:29:31 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/05/05 16:26:46 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	count_int(int nb)
{
	int	len;
	
	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb/10;
		len++; 
	}
	return (len);
}


char *ft_itoa(int nb)
{
	int		i;
	char 	*str;

	i = count_int(nb);
	str = malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	i--;
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

/* int main(void)
{
	printf("%s\n", ft_itoa(215555));
	return (0);
} */