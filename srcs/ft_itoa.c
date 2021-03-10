/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:06:36 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:49:33 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_size(int n)
{
	int	c;

	c = 0;
	if (n < 0)
		c++;
	if (n == 0)
		c = 1;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char			*ft_itoa(int n)
{
	int		n_char;
	char	*str;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	n_char = ft_count_size(n);
	str = malloc(n_char + neg + 1);
	if (!str)
		return (NULL);
	str[n_char + neg] = '\0';
	while (n_char > 0)
	{
		str[--n_char + neg] = n % 10 + 48;
		n /= 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
