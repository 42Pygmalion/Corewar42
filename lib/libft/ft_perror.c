/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 05:24:13 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:17:25 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern unsigned int		g_errno;

void	ft_perror(const char *s)
{
	ft_putstr_fd(s, 2);
	ft_putstr_fd(ft_strerror(g_errno), 2);
}
