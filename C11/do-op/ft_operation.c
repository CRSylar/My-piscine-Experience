/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:23:16 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/06 19:23:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_modulo(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}

int		ft_divisione(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}

int		ft_moltiplicazione(int a, int b)
{
	int	c;

	c = a * b;
	return (c);
}

int		ft_sottrazione(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

int		ft_somma(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}
