/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:51:49 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/28 19:06:57 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int				i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*fnt;
	unsigned	int	n;
	unsigned	int	dlen;

	fnt = src;
	dst = dest;
	n = size;
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(fnt));
	while (*fnt)
	{
		if (n != 1)
		{
			*dst++ = *fnt;
			n--;
		}
		fnt++;
	}
	*dst = '\0';
	return (dlen + (fnt - src));
}
