/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btrdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 09:47:49 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:16:42 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btrdelone(t_btree **node)
{
	t_btree *del;

	if (node && *node)
	{
		del = *node;
		del->content_size = 0;
		if (del->content)
			free(del->content);
		node = NULL;
		free(del);
	}
}
