/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:21:44 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/05 09:41:51 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (dest[k])
		k++;
	while (src[i])
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (dest);
}

void	makesize(char **strs, int size, int *sz, int *lstrs)
{
	*sz = 0;
	while (*sz < size)
	{
		*lstrs = *lstrs + ft_strlen(strs[*sz]);
		*sz += 1;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lsep;
	int		lstrs;
	int		sz;
	char	*out;

	lstrs = 0;
	sz = 0;
	if (size < 1)
	{
		out = malloc(1);
		*out = 0;
		return (out);
	}
	lsep = ft_strlen(sep);
	makesize(strs, size, &sz, &lstrs);
	if (!(out = (char*)malloc(1 + lstrs + (lsep * (sz - 1)) * sizeof(char))))
		return (0);
	sz = 0;
	out[sz] = '\0';
	while (sz++ < size)
	{
		ft_strcat(out, strs[--sz]);
		(sz++ == size - 1) ? ft_strcat(out, "\0") : ft_strcat(out, sep);
	}
	return (out);
}
