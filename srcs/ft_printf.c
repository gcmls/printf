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
	t_fmt specs;
	g_printed_chars = 0;
	va_start(g_ap, fmt);
	while (*fmt++)
	{
		if (*fmt == '%')
			handle_percent_sign(&fmt, specs);
		else
		{
			ft_putchar(*fmt);
			g_printed_chars++;
		}
	}
	va_end(g_ap);
	return (g_printed_chars);
}

void	handle_percent_sign(const char **fmt, t_fmt specs)
{
	//set specs
	//print
}