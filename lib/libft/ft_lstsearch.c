/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 15:58:45 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:17:16 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstsearch(t_list *b, void *content, int (*cmp)())
{
	t_list	*tmp;

	tmp = b;
	while (tmp && cmp(tmp->content, content))
		tmp = tmp->next;
	return (tmp);
}
