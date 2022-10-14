/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:29:52 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/09 11:31:04 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapped_string;
	int		i;

	if (!s || !f)
		return (NULL);
	mapped_string = malloc(ft_strlen(s) + 1);
	if (!mapped_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped_string[i] = f(i, s[i]);
		i++;
	}
	mapped_string[i] = '\0';
	return (mapped_string);
}
