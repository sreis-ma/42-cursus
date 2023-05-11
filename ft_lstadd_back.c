/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:55:37 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/05/11 18:01:05 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	if (*lst)
	{
		while (lst->next != NULL)
			lst = lst->next;
		*lst->next = new;
	}
	else
		*lst->next = new;
}
