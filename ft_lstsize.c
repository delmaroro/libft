/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 04:30:57 by droro             #+#    #+#             */
/*   Updated: 2020/11/21 07:33:46 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	t_list	*begin;
	int		i;

	if (!lst)
		return (0);
	i = 1;
	begin = lst;
	while (begin->next)
	{
		begin = begin->next;
		i++;
	}
	return (i);
}
