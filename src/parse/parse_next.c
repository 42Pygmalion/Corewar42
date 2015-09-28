/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_next.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 00:44:44 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:19:53 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <asm_parse.h>

int		parse_next(t_parse *p)
{
	while (LINE(POS) && LINE(POS) != ' ' && LINE(POS) != '\t')
		POS++;
	while (LINE(POS) && (LINE(POS) == ' ' || LINE(POS) == '\t'))
		POS++;
	if (LINE(POS))
		return (1);
	return (0);
}
