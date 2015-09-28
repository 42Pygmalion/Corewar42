/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:11:34 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:18:33 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)s;
	i = ft_strlen(s);
	while (i != -1)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)&ptr[i]);
		i--;
	}
	return (NULL);
}
