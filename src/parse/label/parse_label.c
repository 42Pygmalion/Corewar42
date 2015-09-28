/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_label.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/27 13:01:24 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:22:21 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_parse.h"
#include "asm_error.h"

int	parse_label(t_parse *p)
{
	t_list	*label;

	label = ft_lstnew(LEXEM, ft_strlen(LEXEM) - 1);
	label->content_size = CHAMPION->len;
	ft_lstadd(&LABEL, label);
	if (!chk_label(label->content))
		error(LABEL_NAMED, p);
	if (POS == 0)
		POS++;
	return (1);
}


