/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:44 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/04/20 19:15:36 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		slen;
	char	*pnew;
	char	*tmp;

	i = 0;
	tmp = ft_strchr(s, start);
	slen = ft_strlen(tmp);
	pnew = malloc(sizeof(char) * (slen + 1));
	if (!pnew)
		return (NULL);
	while ((i < len) && s[i])
	{
		pnew[i] = tmp[i];
		i++;
	}
	pnew[i] = '\0';
	return (pnew);
}

/* int	main(void)
{
	char	str[] = "Trabalha malandra!";
	char	*new;

	new = ft_substr(str, 98, 100);
	printf("New: %s\n", new);
	return (0);
} */