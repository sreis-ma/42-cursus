/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:37:54 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 18:23:29 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	i = 0;
	ps = (unsigned char *)s;
	while (i < n)
	{
		ps[i] = c;
		i++;
	}	
	ps[i] = 0;
	return (ps);
}

/* int	main(void)
{
	char	str[] = "Olaaaaaaaadddsss";
	
	ft_memset(str, 'i', 4);
	printf("%s", str);
	return (0);
} */
