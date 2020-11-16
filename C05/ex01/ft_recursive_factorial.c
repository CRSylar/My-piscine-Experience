/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:00:30 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/03 08:27:17 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	out;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	out = nb * ft_recursive_factorial(nb - 1);
	return (out);
}
