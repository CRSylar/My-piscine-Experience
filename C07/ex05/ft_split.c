/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:41:47 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/05 14:46:19 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int nb)
{
	int i;

	i = 0;
	while (src[i] && (i < nb))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < nb)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_valid(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		scanstr(char *str, char *charset)
{
	int i;

	i = 0;
	while (!(is_valid(str[i], charset)) && str[i] != '\0')
		i++;
	return (i);
}

int		wordcount(char *str, char *charset)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	if (!*str)
		return (0);
	while (str[i])
	{
		while (str[i] && is_valid(str[i], charset))
			i++;
		if (!(is_valid(str[i], charset)) && str[i])
			count++;
		while (str[i] && (!(is_valid(str[i], charset))))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	int		i;
	int		k;
	char	**out;
	char	*ptr;

	i = 0;
	k = 0;
	ptr = str;
	wc = wordcount(ptr, charset);
	if (!(out = (char **)malloc(sizeof(char*) * (wc + 1))))
		return (0);
	while (k < wc)
	{
		i = scanstr(ptr, charset);
		if (!(out[k] = (char *)malloc(i + 1)))
			return (0);
		ft_strncpy(out[k], ptr, i);
		ptr += (i + 1);
		while (*ptr && (is_valid(*ptr, charset)))
			ptr++;
		k++;
	}
	out[k] = 0;
	return (out);
}
