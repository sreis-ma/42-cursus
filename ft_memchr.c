/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:36:27 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 19:08:45 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ts;

	i = 0;
	ts = (char *)s;
	while (ts[i] != '\0' && i <= n)
	{
		if (ts[i] == c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
