/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:04:00 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/04 16:24:34 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if ((*range = malloc((max - min) * (sizeof(int)))) == 0)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}
