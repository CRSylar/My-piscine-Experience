/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:12:37 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/28 21:24:05 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int mux;

	mux = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		mux = mux * nb;
		power--;
	}
	return (mux);
}
