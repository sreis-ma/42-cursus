/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:00:51 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 18:25:24 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (!dst && !src)
		return (0);
	while (j <= size && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char	str1[] = "Bom dia ";
	char	str2[] = "Flor :poop:";
	
	//printf("%zu\n", ft_strlcat(str1, str2, 10));
	ft_strlcat(str1, str2, 10);
	printf("%s", str1);
	return (0);
}*/
