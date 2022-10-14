/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:45:34 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/08 08:45:59 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size_after_start;
	char	*substr;
	size_t	substr_len;
	size_t	i;

	if (!s || (start >= ft_strlen(s)))
		return (ft_strdup(""));
	if (!len)
		return (ft_strdup(""));
	size_after_start = ft_strlen(s + start);
	if (size_after_start > len)
		substr_len = len ;
	else
		substr_len = size_after_start ;
	substr = malloc(substr_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
