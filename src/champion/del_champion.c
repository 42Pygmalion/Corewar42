/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_champion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 00:33:11 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:23:45 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "champion.h"

int		del_champion(t_champ *champ)
{
	if (champ->name)
		free(champ->name);
	if (champ->comment)
		free(champ->comment);
	if (champ->bytecode)
		free(champ->bytecode);
	free(champ);
	return (1);
}
