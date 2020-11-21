/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:22:02 by droro             #+#    #+#             */
/*   Updated: 2020/11/15 15:24:47 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*mem_call;
	size_t	index;

	index = count * size;
	if (!(mem_call = malloc(index)))
		return (NULL);
	ft_bzero(mem_call, index);
	return (mem_call);
}
