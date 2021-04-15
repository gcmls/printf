/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:17:24 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/03/09 18:17:24 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Get specs from fmt string
** @param:	- [const char **] fmt
**			- [t_fmt] specs
** Line-by-line comments:
** @line-line	comment
*/

void	ft_init_specs(t_fmt *specs)
{
	specs->minus = 0;
	specs->plus = 0;
	specs->zero = 0;
	specs->space = 0;
	specs->star = 0;
	specs->display = 1;
	specs->width = 0;
	specs->precision = 0;
	specs->type = 0;
	specs->len = 0;
	specs->ret = 0;
}

/*
** Get flags from fmt string
** @param:	- [const char*] fmt
**			- [char *] flags
** Line-by-line comments:
** @line-line	comment
*/

void	get_flags(const char **fmt, char *flags)
{
	
}

/*
** Get width from fmt string
** @param:	- [const char*] fmt
** @return: [int] width
** Line-by-line comments:
** @line-line	comment
*/

int		get_width(const char **fmt)
{
	int width;

	width = 0;
}

/*
** Get precision from fmt string
** @param:	- [const char*] fmt
** @return: [int] precision
** Line-by-line comments:
** @line-line	comment
*/

int		get_precision(const char **fmt)
{
	int precision;

	precision = 0;
}

/*
** Get size from fmt string
** @param:	- [const char*] fmt
** @param:	- [char *] size
** Line-by-line comments:
** @line-line	comment
*/

void	get_size(const char **fmt, char *size)
{
	
}