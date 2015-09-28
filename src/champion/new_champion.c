/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_champion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 00:31:30 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:23:40 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "champion.h"

t_champ		*new_champion(void)
{
	t_champ		*champ;

	champ = (t_champ *)malloc(sizeof(t_champ));
	champ->name = NULL;
	champ->comment = NULL;
	champ->bytecode = NULL;
	champ->len = 0;
	return (champ);
}
