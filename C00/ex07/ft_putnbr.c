/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:52:38 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/21 18:08:34 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int t;
	int sz;

	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		putchar('2');
		nb = 147483648;
	}
	t = nb;
	sz = 1;
	while ((t = t / 10) > 0)
		sz = sz * 10;
	t = nb;
	while (sz)
	{
		putchar((t / sz) + '0');
		t = t % sz;
		sz = sz / 10;
	}
}
