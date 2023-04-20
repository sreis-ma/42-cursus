/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:38:50 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 19:08:53 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;

	i = 0;
	pdest = (char *) dest;
	psrc = (char *) src;
	while (i <= n && src[i] != '\0')
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
