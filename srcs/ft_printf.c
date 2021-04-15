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

int	ft_printf(const char *fmt, ...)
{
	t_arg_char *util;
	int ret;

	va_start(AP, fmt);
	ret = ft_printf_aux(fmt, util);
	va_end(AP);
	return (ret);
}

int	ft_printf_aux(const char *fmt, t_arg_char *util)
{
	t_fmt specs;
	int start;
	int ret;
	int i;

	i = 0;
	ret = 0;
	start = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			print(fmt, start, i);
			ret += (i - start);
			init_specs(&specs);
			if (specs.type == 0 || specs.type == -1)
				i++;
			print_types(&specs, AP);
			ret += specs.ret;
			start = i;
		}
		if (fmt[i] && fmt[i] != '%')
			i++;
	}
	print(fmt, start, i);
	return (ret + i - start);
}

void	print(const char *fmt, int start, int end)
{
	while (start < end && fmt[start])
		ft_putchar(fmt[start++]);	
}