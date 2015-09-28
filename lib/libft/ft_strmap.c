/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:27:44 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:15:53 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*map;
	size_t		i;

	map = ft_strnew(ft_strlen(s));
	i = 0;
	if (map)
	{
		while (s[i])
		{
			map[i] = f(s[i]);
			i++;
		}
		map[i] = '\0';
	}
	return (map);
}
