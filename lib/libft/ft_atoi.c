/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/15 18:11:10 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:16:36 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atoi(const char *str)
{
	long long	i;
	long long	n;
	long long	r;

	i = 0;
	n = 0;
	r = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	while ((*str == '-' || *str == '+') && ++i && ++str)
		if (*(str - 1) == '-')
			n++;
	while (*str >= '0' && *str <= '9' && i <= 1)
	{
		r *= 10;
		r += *str - 48;
		str++;
	}
	if (n)
		r *= -1;
	return (r);
}
