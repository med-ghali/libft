/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:48:39 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/07 11:48:42 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r' ) || c == ' ' )
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	signe;
	int	res;

	res = 0;
	signe = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signe = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		res = (10 * res) + *nptr - '0';
		nptr++;
	}
	return (res * signe);
}
