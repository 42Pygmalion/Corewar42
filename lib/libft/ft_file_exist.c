/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_exist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 07:29:05 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:16:58 by cstroh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

extern int	g_errno;

int		ft_file_exist(const char *path)
{
	struct stat	s;

	g_errno = 0;
	if (lstat(path, &s) == 0)
		return (1);
	g_errno = ENOENT;
	return (0);
}
