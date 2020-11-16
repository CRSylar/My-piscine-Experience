/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:23:36 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/06 19:23:44 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while (*str == '\t'
			|| *str == '\n'
			|| *str == '\v'
			|| *str == '\f'
			|| *str == '\r'
			|| *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += (sign * (*(str++) - '0'));
	}
	return (ret);
}

void	ft_putnbr(int nbr)
{
	int temp;
	int	size;

	size = 1;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr == -2147483648)
	{
		ft_putchar('2');
		nbr = 147483648;
	}
	temp = nbr;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nbr;
	while (size)
	{
		ft_putchar((temp / size) + 48);
		temp %= size;
		size /= 10;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
