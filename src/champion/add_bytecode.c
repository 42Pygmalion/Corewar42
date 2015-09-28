/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_bytecode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/28 13:45:45 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:23:52 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "champion.h"

int		add_bytecode(t_champ *champion, char byte)
{
	char	c[2];

	if (!champion->bytecode)
		champion->bytecode = (char *)ft_memalloc(1024);
	if (champion->len >= 1024)
	{
		c[1] = 0;
		c[0] = byte;
		ft_strjoin(champion->bytecode, c);
	}
	else
	{
		champion->bytecode[champion->len] = byte;
		champion->len++;
	}
	return (1);
}
