/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/15 18:11:34 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:16:40 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_btradd(t_btree **root, t_btree *elem, int (*sort)())
{
	t_btree	*tmp;
	t_btree	*node;

	if (root && *root)
	{
		tmp = *root;
		while ((node = tmp))
		{
			if (sort(elem, tmp) > 0)
			{
				if (!(tmp = tmp->right))
					node->right = elem;
			}
			else
			{
				if (!(tmp = tmp->left))
					node->left = elem;
			}
		}
	}
	else
		*root = elem;
}
