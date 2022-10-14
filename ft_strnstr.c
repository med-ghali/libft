/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:52:08 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/07 11:52:12 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!(haystack && needle) && !len)
		return (0);
	if (!(*needle))
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && (i + needle_len <= len))
	{
		if (!ft_strncmp(haystack + i, needle, needle_len))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
