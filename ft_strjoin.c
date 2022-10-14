/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:41:23 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/08 09:46:51 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	strjoin_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	strjoin_len = ft_strlen(s1)+ft_strlen(s2);
	strjoin = malloc(strjoin_len + 1);
	if (!strjoin)
		return (NULL);
	ft_memcpy(strjoin, s1, ft_strlen(s1));
	ft_memcpy(strjoin + ft_strlen(s1), s2, ft_strlen(s2));
	strjoin[strjoin_len] = '\0';
	return (strjoin);
}
