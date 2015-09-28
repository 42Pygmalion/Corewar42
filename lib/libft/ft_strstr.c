/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:14:56 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:15:28 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		len_s2;

	if (!*s2)
		return ((char *)s1);
	len_s2 = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s2, s1, len_s2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
