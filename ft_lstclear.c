/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 05:45:37 by droro             #+#    #+#             */
/*   Updated: 2020/11/21 10:17:20 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tool;

	if (!lst || !(*lst) || !(del))
		return ;
	while (*lst)
	{
		tool = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tool;
	}
	*lst = 0;
}
