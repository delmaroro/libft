/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:49:19 by droro             #+#    #+#             */
/*   Updated: 2020/11/21 07:35:09 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = s;
	if (n != 0)
	{
		while (i < n)
		{
			*pointer = '\0';
			pointer++;
			i++;
		}
	}
}
