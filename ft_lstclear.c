/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:21:48 by sreis-ma          #+#    #+#             */
/*   Updated: 2023/05/11 19:20:02 by sreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	
	if (!lst || !del)
		return ;
	while (*lst)
	{
		del(lst->content);
		tmp = lst->next;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}