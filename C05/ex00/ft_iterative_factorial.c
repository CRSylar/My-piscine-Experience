/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:42:16 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/03 08:26:46 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb)
	{
		out = out * nb;
		nb--;
	}
	return (out);
}
