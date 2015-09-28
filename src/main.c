/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 05:51:59 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:20:35 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_error.h"
#include "asm_parse.h"

int		main(int ac, char **av)
{
	if (!error_arg(ac, av))
		create_champion(parse(av[1]), av[1]);
	return (0);
}
