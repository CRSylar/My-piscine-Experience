/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:35:14 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/05 12:59:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		checkbase(char *base);

int		ft_atoi_base(char *str, char *base);

char	*ft_rev(char *str)
{
	int		i;
	int		k;
	char	temp;

	i = 0;
	k = 0;
	while (str[k])
		k++;
	while (i < --k)
	{
		temp = str[i];
		str[i] = str[k];
		str[k] = temp;
		i++;
	}
	return (str);
}

int		lungnbr(int nbr, int lengbase)
{
	int dim;

	dim = 0;
	if (nbr == -2147483648)
		return (11);
	else if (nbr < 0)
	{
		nbr = -nbr;
		while (nbr > 0)
		{
			nbr = nbr / lengbase;
			dim++;
		}
	}
	return (dim);
}

int		posorneg(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int					i;
	unsigned	int		n;
	int					lnbr;
	int					lbase;
	char				*out;

	n = posorneg(nbr);
	i = 0;
	lnbr = 0;
	lbase = checkbase(base);
	lnbr = (lungnbr(nbr, lbase));
	if ((out = (char *)malloc(lnbr + 3)) == 0)
		return (0);
	n = posorneg(nbr);
	out[0] = base[0];
	while (n > 0)
	{
		out[i] = base[n % lbase];
		n = n / lbase;
		i++;
	}
	if (nbr < 0)
		out[i] = '-';
	i++;
	return (out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		conv;

	res = 0;
	if ((checkbase(base_from) == 0) || (checkbase(base_to)) == 0)
		return (res);
	conv = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(conv, base_to);
	ft_rev(res);
	return (res);
}
