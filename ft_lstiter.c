/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 07:45:26 by droro             #+#    #+#             */
/*   Updated: 2020/11/20 07:51:02 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tool;

	if (!lst || !f)
		return ;
	tool = lst;
	while (tool)
	{
		f(tool->content);
		tool = tool->next;
	}
}
