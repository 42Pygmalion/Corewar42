/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_error.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 07:32:38 by cstroh            #+#    #+#             */
/*   Updated: 2014/06/15 20:39:36 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_ERROR_H
# define ASM_ERROR_H

# include <libft.h>
# include "asm_parse.h"

typedef enum	e_error
{
	CMD,
	CMD_STRING_LENGTH,
	INVALID_CHAR,
	LABEL_NAMED,
	LABEL_EXIST,
	MNEMONIC,
	ARG,
}				t_error;

int		error(t_error e, void *p);
int		error_arg(int ac, char **av);
void	error_instruct_arg(t_parse *p);
void	error_label_name(t_parse *p);
void	error_label_exist(char *p);


#endif /* !ASM_ERROR_H */
