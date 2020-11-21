/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 08:36:59 by droro             #+#    #+#             */
/*   Updated: 2020/11/21 12:03:22 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				lim(const char *st, int i, int sign, unsigned long c)
{
	const char			*max;
	int					counter;
	int					output;

	output = (sign > 0) ? -1 : 0;
	max = (sign > 0) ? "9223372036854775806" : "9223372036854775807";
	counter = 0;
	if (i > 19)
		return (output);
	else if (i == 19)
	{
		while (counter < 19)
		{
			if (max[counter] - st[counter] > 0)
				return ((int)c * sign);
			if (max[counter] - st[counter] < 0)
				return (output);
			counter++;
		}
	}
	return ((int)c * sign);
}

int						ft_atoi(const char *str)
{
	int					j;
	int					i;
	unsigned long		z;

	z = 0;
	j = 1;
	i = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && *str == '0')
		str++;
	if (*str == '+' || *str == '-')
	{
		j = (*str == '+') ? 1 : -1;
		str++;
	}
	while (*str && *str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		z = z * 10 + (*str - '0');
		str++;
		i++;
	}
	return (lim(str - i, i, j, z));
}
