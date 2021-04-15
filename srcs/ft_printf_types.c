/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_types.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:01:55 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/03/14 19:01:55 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Print different types of variables based on the TYPE
** @param:	- [t_ftm] specs
** Line-by-line comments:
** @line-line	comment
*/

void	print_types(t_fmt *specs, t_arg_char *util)
{
	if (TYPE == 'c' || TYPE == "C")
		ft_print_char(specs, AP);
	else if (TYPE == 'd' || TYPE == 'i')
		ft_print_s_int(specs, AP);
	else if (TYPE == 'o' || TYPE == 'u')
		ft_print_u_int(specs, AP);
	else if (TYPE == 'x' || TYPE == 'X')
		ft_print_hex(specs, AP);
	else if (TYPE == 'e' || TYPE == 'E')
		ft_print_exp(specs, AP);
	else if (TYPE == 'f' || TYPE == 'F')
		ft_print_float(specs, AP);
	else if (TYPE == 'g' || TYPE == 'G')
		ft_print_g(specs, AP);
	else if (TYPE == 'a' || TYPE == 'A')
		ft_print_a(specs, AP);
	else if (TYPE == 'n')
		ft_print_n(specs, AP);
	else if (TYPE == 'p')
		ft_print_ptr(specs, AP);
	else if (TYPE == 's' || TYPE == 'S')
		ft_print_str(specs, AP);
	else if (TYPE == 'Z')
		ft_print_z(specs, AP);
	else if (TYPE == '%')
		ft_print_perc(specs, AP);
}


void	ft_print_char(t_fmt *specs, t_arg_char *util)
{

}
void	ft_print_u_int(t_fmt *specs, t_arg_char *util);
void	ft_print_s_int(t_fmt *specs, t_arg_char *util);
void	ft_print_hex(t_fmt *specs, t_arg_char *util);

void	ft_print_exp(t_fmt *specs, t_arg_char *util);
void	ft_print_float(t_fmt *specs, t_arg_char *util);
void	ft_print_g(t_fmt *specs, t_arg_char *util);
void	ft_print_a(t_fmt *specs, t_arg_char *util);

void	ft_print_n(t_fmt *specs, t_arg_char *util);
void	ft_print_ptr(t_fmt *specs, t_arg_char *util);
void	ft_print_str(t_fmt *specs, t_arg_char *util);
void	ft_print_z(t_fmt *specs, t_arg_char *util);
void	ft_print_perc(t_fmt *specs, t_arg_char *util);