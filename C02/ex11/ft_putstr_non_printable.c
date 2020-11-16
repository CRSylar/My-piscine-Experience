/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printabile.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:37:55 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/11 17:40:30 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(char c)
{
	char		hex;
	char		hex2;
	int			neg;

	ft_putchar('\\');
	if (c < 0)
	{
		neg = 256 + c;
		hex = neg / 16;
		hex2 = neg % 16;
	}
	else
	{
		hex = c / 16;
		hex2 = c % 16;
	}
	if (hex < 10)
		ft_putchar(hex + '0');
	else
		ft_putchar(hex + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char	*arr;
	int		i;

	arr = str;
	i = 0;
	while (arr[i])
	{
		if (arr[i] < 32 || arr[i] == 127)
			ft_printhex(arr[i]);
		else
			ft_putchar(arr[i]);
		i++;
	}
}
