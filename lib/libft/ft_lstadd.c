/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 15:15:53 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:17:10 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **begin, t_list *new)
{
	t_list	*tmp;

	tmp = *begin;
	while (begin && tmp && tmp->next)
		tmp = tmp->next;
	if (begin && tmp)
		tmp->next = new;
	else
		*begin = new;
}
