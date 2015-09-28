/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_label.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/28 12:55:41 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:21:51 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_parse.h"
#include "asm_error.h"

int		call_label(t_parse *p, char *name, int op_bytepos)
{
	t_list	*label;
	t_list	*new_call;

	label = ft_lstnew(name, ft_strlen(name));
	label->content_size = op_bytepos;
	new_call = ft_lstnew(label, sizeof(t_list));
	if (TYPE == ARG_DIR_TYPE)
		new_call->content_size = CHAMPION->len;
	else
		new_call->content_size = -CHAMPION->len;
	ft_lstadd(&CALL_LABEL, new_call);
	return (1);
}
