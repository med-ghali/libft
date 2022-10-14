/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:47:16 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/08 17:47:18 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar )
{
	while (*string)
	{
		if (*string == (char)searchedChar)
			return ((char *)(string));
		string ++;
	}
	if (searchedChar == '\0')
		return ((char *)(string));
	return (NULL);
}
