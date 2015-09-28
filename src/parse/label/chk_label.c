/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_label.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/28 13:04:03 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 16:22:10 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_parse.h"
#include "asm_error.h"

int		chk_label(char *name)
{
	int		i;
	int		j;
	char	label_chars[] = LABEL_CHARS;

	if (!name || !name[0])
		return (0);
	i = 0;
	while (name[i])
	{
		j = 0;
		while (name[i] != label_chars[j])
		{
			if (!label_chars[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
