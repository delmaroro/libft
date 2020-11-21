/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 07:51:11 by droro             #+#    #+#             */
/*   Updated: 2020/11/21 03:07:35 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_new;
	t_list	*tmp;
	t_list	*head;
	t_list	*tmp_new2;

	if (!lst || !f)
		return (0);
	tmp = lst;
	head = ft_lstnew(f(tmp->content));
	if (!head)
		return (0);
	tmp_new = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (!(tmp_new2 = ft_lstnew(f(tmp->content))))
		{
			ft_lstclear(&head, del);
			return (0);
		}
		tmp_new->next = tmp_new2;
		tmp_new = tmp_new->next;
	}
	return (head);
}
