/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:06:03 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:48:27 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count_words(char const *s, char c)
{
	size_t	nb_words;
	size_t	i;

	nb_words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			if (!s[i + 1])
				return (nb_words);
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
		nb_words++;
	}
	return (nb_words);
}

static void			*free_ret(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char			**ft_split_helper(char const *s, char c, size_t nb_words)
{
	size_t	i;
	size_t	j;
	char	**splited;

	i = 0;
	j = 0;
	splited = malloc(sizeof(char*) * (nb_words + 1));
	if (!splited)
		return (NULL);
	while (j < nb_words)
	{
		while (s[i] && s[i] == c)
			i++;
		s += i;
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		splited[j] = (char *)malloc(sizeof(char) * (i + 1));
		if (!splited[j])
			return (free_ret(splited));
		ft_strlcpy(splited[j], s, i + 1);
		j++;
	}
	splited[j] = 0;
	return (splited);
}

char				**ft_split(char const *s, char c)
{
	size_t	nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	return (ft_split_helper(s, c, nb_words));
}
