/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:50:27 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/28 18:23:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int	i;
	int	out;
	int	neg;

	i = 0;
	neg = 1;
	out = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			neg = -1 * neg;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		out = ((out * 10) + (str[i] - '0'));
		i++;
	}
	return (out * neg);
}
