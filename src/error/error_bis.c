/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/15 19:10:08 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 19:12:51 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_parse.h"
#include "asm_error.h"

void		error_instruct_arg(t_parse *p)
{
	ft_putstr_fd("asm: Invalid argument \"", 2);
	ft_putstr_fd(LEXEM, 2);
	ft_putstr_fd("\", line : ", 2);
	ft_putnbr_fd(LINE_NBR, 2);
	ft_putstr_fd(", char : ", 2);
	ft_putnbr_fd(POS, 2);
	ft_putchar_fd('\n', 2);
}

void		error_label_name(t_parse *p)
{
	ft_putstr_fd("asm: Invalid label name \"", 2);
	ft_putstr_fd(LEXEM, 2);
	ft_putstr_fd("\", line : ", 2);
	ft_putnbr_fd(LINE_NBR, 2);
	ft_putstr_fd(", char : ", 2);
	ft_putnbr_fd(POS, 2);
	ft_putchar_fd('\n', 2);
}

void		error_label_exist(char *p)
{
	ft_putstr_fd("asm: Label \"", 2);
	ft_putstr_fd(p, 2);
	ft_putstr_fd("\" does not exist\n", 2);
}
