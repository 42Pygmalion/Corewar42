/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:46:41 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:15:30 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	swap;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i])
	{
		if (i >= j)
			return (s);
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
		i++;
		j--;
	}
	return (s);
}
