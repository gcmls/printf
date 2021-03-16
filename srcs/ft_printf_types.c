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
** Print different types of variables based on the specs->type
** @param:	- [t_ftm] specs
** Line-by-line comments:
** @line-line	comment
*/

void	ft_print_types(t_fmt *specs)
{
	if (specs->type == 'c' || specs->type == "C")
		//print char
	else if (specs->type == 'd' || specs->type == 'i')
		//print signed int
	else if (specs->type == 'o' || specs->type == 'u')
		//print unsigned int
	else if (specs->type == 'x' || specs->type == 'X')
		//print hexadecimal
	else if (specs->type == 'e' || specs->type == 'E')
		//print exp
	else if (specs->type == 'f' || specs->type == 'F')
		//print float
	else if (specs->type == 'g' || specs->type == 'G')
		//print	g
	else if (specs->type == 'a' || specs->type == 'A')
		//print	a
	else if (specs->type == 'n')
		//print n
	else if (specs->type == 'p')
		//print pointer
	else if (specs->type == 's' || specs->type == 'S')
		//print string
	else if (specs->type == 'Z')
		//print z
}


void	ft_print_char(t_fmt *specs);
void	ft_print_u_int(t_fmt *specs);
void	ft_print_s_int(t_fmt *specs);
void	ft_print_hex(t_fmt *specs);

void	ft_print_exp(t_fmt *specs);
void	ft_print_float(t_fmt *specs);
void	ft_print_g(t_fmt *specs);
void	ft_print_a(t_fmt *specs);

void	ft_print_n(t_fmt *specs);
void	ft_print_ptr(t_fmt *specs);
void	ft_print_str(t_fmt *specs);
void	ft_print_z(t_fmt *specs);