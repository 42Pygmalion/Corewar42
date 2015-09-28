/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/17 10:16:19 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:17:47 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2 && ++s1 && ++s2 && ++i)
		;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}