/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 23:16:20 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:15:50 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(char *str, size_t len)
{
	char	*dup;

	dup = NULL;
	if ((dup = ft_strnew(len)))
	{
		if (ft_strlen(str) >= len)
			ft_strncpy(dup, str, len);
		else
			ft_strcpy(dup, str);
	}
	return (dup);
}
