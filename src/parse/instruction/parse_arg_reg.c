/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg_reg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 12:46:20 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:23:08 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_parse.h"
#include "asm_error.h"

int		parse_arg_reg(t_parse *p)
{
	int		n;

	if ((n = ft_atoi(&LEXEM[1])) && n < REG_NUMBER)
		add_bytecode(CHAMPION, n & 0xFF);
	else
		error(ARG, p);
	return (1);
}

