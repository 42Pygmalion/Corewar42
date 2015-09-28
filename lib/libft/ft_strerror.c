/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 02:07:20 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:16:11 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_errno.h"

extern t_errno		g_errno_tab[];

char	*ft_strerror(unsigned int errnum)
{
	static char	*str = NULL;

	if (str != NULL)
		ft_strdel(&str);
	if (errnum < 132)
		str = ft_strdup(g_errno_tab[errnum].s);
	else
		str = NULL;
	return (str);
}
