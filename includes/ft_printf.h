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


/*
**	Specs 
*/

void	ft_print_types(t_fmt *specs);

#endif