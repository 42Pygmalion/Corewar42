/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:09:21 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:17:17 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*ptr;
	size_t	i;

	i = 0;
	ptr = (int *)malloc(sizeof(int) * (size + 1));
	if (ptr)
		while (i <= size && (ptr[i] = 0) == 0)
			++i;
	return ((void *)ptr);
}
