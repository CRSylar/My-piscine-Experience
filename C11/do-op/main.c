/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:59:10 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/09 20:44:38 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_utils.h"
#include <unistd.h>

int		(*g_fptr[5])(int a, int b);

int		ft_validoperator(char *argv)
{
	if (ft_strlen(argv) != 1)
		return (-2);
	if (argv[0] == '+')
		return (0);
	if (argv[0] == '-')
		return (1);
	if (argv[0] == '*')
		return (2);
	if (argv[0] == '/')
		return (3);
	if (argv[0] == '%')
		return (4);
	return (-2);
}

void	makefunptr(void)
{
	g_fptr[0] = ft_somma;
	g_fptr[1] = ft_sottrazione;
	g_fptr[2] = ft_moltiplicazione;
	g_fptr[3] = ft_divisione;
	g_fptr[4] = ft_modulo;
}

int		ft_iferr(int *i, char **argv)
{
	if ((*i = ft_validoperator(argv[2])) == -2)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (-1);
	}
	if ((*i == 3) && (ft_atoi(argv[3]) == 0))
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	if ((*i == 4) && (ft_atoi(argv[3]) == 0))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int out;

	if (argc != 4)
		return (-1);
	i = 0;
	makefunptr();
	if (ft_iferr(&i, argv) == -1)
		return (0);
	out = (*g_fptr[i])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putnbr(out);
	ft_putchar('\n');
	return (0);
}
