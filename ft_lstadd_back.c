/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 04:38:26 by droro             #+#    #+#             */
/*   Updated: 2020/11/21 07:29:31 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*begin;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		begin = *lst;
		while (begin->next)
			begin = begin->next;
		begin->next = new;
	}
}
