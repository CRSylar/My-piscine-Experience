/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:27:40 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/25 18:03:21 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	valc(int a, int b, int c)
{
	while (c <= '9')
	{
		putchar(a);
		putchar(b);
		putchar(c);
		if (!((a == '7') && (b == '8')))
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		while (b <= '9')
		{
			valc(a, b, c);
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}
