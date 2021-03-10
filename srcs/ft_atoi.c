/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:24:20 by gcmls             #+#    #+#             */
/*   Updated: 2021/02/24 17:00:17 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int result;
	int sign;
	int length;

	result = 0;
	sign = 1;
	length = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		if (++length > 10 && sign == -1)
			return (0);
		else if (length > 10 && sign == 1)
			return (-1);
		result *= 10;
		result += (int)(*str - '0');
		str++;
	}
	return (sign * result);
}
