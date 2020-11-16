/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:55:28 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/05 12:20:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		while (base[j] != '\0')
		{
			if ((base[j] == base[i]) && (i != j))
				return (0);
			j++;
		}
		i++;
		j = 1;
	}
	return (i);
}

int		checkpos(char c, char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		if (c == arr[i])
			return (i);
		i++;
	}
	return (i * -1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int szbase;
	int pos;
	int out;
	int	i;
	int	neg;

	neg = 1;
	i = 0;
	out = 0;
	if ((szbase = checkbase(base)) > 1)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			neg *= (str[i] == '-') ? -1 : 1;
			i++;
		}
		while (str[i] != '\0' && (pos = checkpos(str[i], base)) >= 0)
		{
			out = out * szbase + pos;
			i++;
		}
	}
	return (out * neg);
}
