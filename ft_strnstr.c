/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:12:04 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 18:30:25 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = ft_strlen((char *)little);
	j = 0;
	while (big[i] && i <= len)
	{
		if (ft_strncmp(big + j, little, i) == 0)
		{
			return ((char *)big + j);
		}
		j++;
	}
	return (0);
}
