/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:11:14 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 18:24:21 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(ft_strlen((char *)s) * sizeof(char) + 1);
	if (!new)
		return (0);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* int	main(void)
{
	char	str[] = "TRABALHA MALANDRA :poop:";
	char	*newstr;

	newstr = ft_strdup(str);
	printf("New string: %s\n", newstr);
	return (0);
} */