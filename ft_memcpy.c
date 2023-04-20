/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:11:44 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 18:20:49 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	const char		*psrc;
	size_t			i;

	pdest = dest;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	pdest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	s1[] = "this is a string";
	char	s2[] = "string copied from";
	
	printf("before ft_memcpy: %s\n", s1);
	ft_memcpy(s1, s2, 9);
	printf("after ft_memcpy: %s\n", s1);
	return (0);
} */
