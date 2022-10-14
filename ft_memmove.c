/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 07:54:33 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/07 07:54:38 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (dst);
	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			*((char *)(dst + len)) = *((char *)(src + len));
		}
	}
	else
	{
		while (i < len)
		{
			*((char *)(dst + i)) = *((char *)(src + i));
			i++;
		}
	}
	return (dst);
}
