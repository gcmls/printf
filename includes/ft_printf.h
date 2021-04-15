/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:19:47 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/03/08 20:19:47 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

/*
**	Global VA 
*/

typedef struct	s_arg_char
{
	va_list		ap;
	int			printed_chars;
}				t_arg_char;

typedef struct  s_fmt
{
	int plus;
	int minus;
	int zero;
	int space;
	int star;
	int display;
	int width;
	int precision;
	char type;
	int len;
	int ret;
}				t_fmt;

# define AP 				util->ap
# define PRINTED_CHARS		util->printed_chars
# define TYPE				specs->type

void	print_types(t_fmt *specs, t_arg_char *util);
void	init_specs(t_fmt *specs);

#endif