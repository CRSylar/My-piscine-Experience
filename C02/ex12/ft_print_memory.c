/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:08:21 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/02 18:51:41 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	streamrow(unsigned int uadr, unsigned int sz, char *chuaddr);

void	ft_putchar(char c, unsigned int memaddr, unsigned int y)
{
	unsigned	int i;

	i = 0;
	if (y == 42042)
	{
		while ((memaddr = memaddr / 16) > 0)
			i++;
		while ((15 - i) > 0)
		{
			write(1, &c, 1);
			i++;
		}
	}
	else
		write(1, &c, 1);
}

void	printcont(char *str, unsigned int sz)
{
	unsigned	int	i;
	unsigned	int j;

	i = 0;
	j = 0;
	while ((16 - sz - j) > 0)
	{
		ft_putchar(' ', 0, 10);
		j++;
	}
	while ((i < 16) && (i < sz))
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		if (str[i] > 31 && str[i] < 127)
			ft_putchar(str[i], 0, 10);
		else
			ft_putchar('.', 0, 10);
		i++;
	}
}

void	convhex(unsigned int nbr, unsigned int x)
{
	char				*esad;
	unsigned	int		sz;
	unsigned	int		t;

	t = nbr;
	sz = 1;
	esad = "0123456789abcdef";
	if (x == 42042)
		ft_putchar('0', nbr, 42042);
	if (t < 17)
		ft_putchar('0', 0, 10);
	while ((t = t / 16) > 0)
		sz = sz * 16;
	t = nbr;
	while (sz)
	{
		ft_putchar(esad[t / sz], 0, 10);
		t = t % sz;
		sz = sz / 16;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned	int	k;

	k = 0;
	if (size == 0)
		return (addr);
	while (size > 16)
	{
		streamrow((unsigned int)addr + k, 16, ((char*)addr + k));
		k = k + 16;
		size = size - 16;
	}
	streamrow((unsigned int)addr + k, size, ((char*)addr + k));
	return (addr + k + size);
}

void	streamrow(unsigned int uadr, unsigned int sz, char *chuaddr)
{
	unsigned	int i;

	i = 0;
	if (sz == 0)
		return ;
	convhex(uadr, 42042);
	ft_putchar(':', 0, 10);
	while (i < sz)
	{
		if (!((i % 2) == 1))
			ft_putchar(' ', 0, 10);
		convhex(*(chuaddr + i), 10);
		i++;
	}
	ft_putchar(' ', 0, 10);
	printcont(chuaddr, sz);
	ft_putchar('\n', 0, 10);
}
