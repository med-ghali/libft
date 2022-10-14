/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:46:34 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/09 10:54:23 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_of_words(char const *s, char c)
{
	int	count;
	int	new_word;

	new_word = 1;
	count = 0;
	while (*s)
	{
		if ((*s != c) && new_word)
		{
			count ++;
			new_word = 0;
		}
		else if (*s == c)
			new_word = 1;
		s++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, int *j)
{
	int		i;
	int		k;
	int		l;
	char	*word;

	i = *j;
	while (s[i] == c && s[i])
		i++;
	k = i;
	while (s[i] != c && s[i])
		i++;
	word = malloc((i - k) + 1);
	if (!word)
		return (0);
	l = 0;
	while (k < i)
	{
		word[l] = s[k];
		k++;
		l++;
	}
	word[l] = '\0';
	*j = i;
	return (word);
}

static char	**free_all(char **tab, int i)
{
	while (i--)
	{
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		num ;
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	num = get_num_of_words(s, c);
	tab = malloc(sizeof(char *) * (num + 1));
	if (!tab)
		return (0);
	while (i < num)
	{
		tab[i] = get_next_word(s, c, &j);
		if (!tab[i])
			return (free_all(tab, i));
		i++;
	}
	tab[i] = 0;
	return (tab);
}
