/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:54:34 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/13 22:09:07 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pstr;

	pstr = (unsigned char *)s;
	ft_memset(pstr, 0, n);
}

/* int	main(void)
{
	char	str[] = "Olaaaaaaaadddsss";
	
	printf("Before bzero: %s\n", str);
	ft_bzero(str, 4);
	printf("After bzero: %s\n", str);
	return (0);
} */
