/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:50:59 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/07 11:51:02 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c )
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
