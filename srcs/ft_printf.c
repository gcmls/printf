/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:24:52 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/03/08 17:24:52 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	t_fmt *specs;
	t_arg_char *util;
	va_start(util->ap, fmt);
	while (*fmt++)
	{
		if (*fmt == '%')
			handle_percent_sign(&fmt, specs, util);
		else
		{
			ft_putchar(*fmt);
			util->printed_chars++;
		}
	}
	va_end(util->ap);
	return (util->printed_chars);
}

void	handle_percent_sign(const char **fmt, t_fmt *specs, t_arg_char *util)
{
	specs->type = *fmt++;
	ft_print_types(specs);
	//set specs
	//print
}