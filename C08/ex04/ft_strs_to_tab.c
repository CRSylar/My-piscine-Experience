/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:33:39 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/03 19:22:41 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *out;

	i = 0;
	if ((out = (t_stock_str *)malloc((ac + 2) * sizeof(t_stock_str))) == 0)
		return (out);
	while (ac > 0)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = av[i];
		if ((out[i].copy = (char *)malloc(ft_strlen(av[i]) + 1)) == 0)
			return (0);
		ft_strcpy(out[i].copy, av[i]);
		ac--;
		i++;
	}
	out[i].str = 0;
	return (out);
}
