/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:13:20 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:15:27 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	sub = ft_strnew(len);
	i = start;
	j = 0;
	if (sub)
	{
		while (s[i] && j < len)
			sub[j++] = s[i++];
		return (sub);
	}
	return (NULL);
}
