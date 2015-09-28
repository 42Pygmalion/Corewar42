/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:25:07 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:17:11 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;
	t_list	*tmp;

	elem = *alst;
	while (elem->next)
	{
		tmp = elem->next;
		ft_lstdelone(&elem, del);
		elem = tmp;
	}
	ft_lstdelone(&elem, del);
	alst = &elem;
}
