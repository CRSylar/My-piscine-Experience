/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:41:47 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/11 08:32:38 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_valid(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	get_word_cnt(char *str, char *charset)
{
	long long int cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_valid(*str, charset))
		{
			++cnt;
			while (*str && !is_valid(*str, charset))
				++str;
		}
		++str;
	}
	return (cnt);
}

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = 0;
}

char		**ft_split(char *str, char *charset)
{
	char			**ret;
	long long int	idx;
	char			*from;

	ret = (char**)malloc(sizeof(char*) * get_word_cnt(str, charset) + 1);
	idx = 0;
	while (*str)
	{
		if (!is_valid(*str, charset))
		{
			from = str;
			while (*str && !is_valid(*str, charset))
				++str;
			ret[idx] = (char*)malloc(str - from + 1);
			ft_strcpy(ret[idx++], from, str);
		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}
