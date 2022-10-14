/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:35:54 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/08 10:35:56 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_includes(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	char		*trimed;
	char		*return_trimed;

	if (!s1)
		return (NULL);
	start = s1;
	end = s1 + (ft_strlen(s1)-1);
	while (ft_includes(set,*start) && *(start + 1))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_includes(set, *end) && (end != start))
		end--;
	trimed = malloc ((end - start + 1) + 1);
	if (!trimed)
		return (NULL);
	return_trimed = trimed;
	while (start <= end)
		*trimed++ = *start++;
	*trimed = '\0';
	return (return_trimed);
}
