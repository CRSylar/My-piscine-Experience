/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:33:15 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/09 20:45:56 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*out;
	int		i;

	i = 0;
	if (!(out = (int)malloc(length * sizeof(*tab))))
		return (0);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
