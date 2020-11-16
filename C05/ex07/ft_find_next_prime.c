/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:03:25 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/04 09:00:16 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(unsigned int nb, unsigned int i)
{
	if ((nb % i) == 0)
		return (0);
	if ((i * i) > nb)
		return (1);
	return (prime(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (prime((unsigned int)nb, 2));
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				not_prime;

	i = (unsigned int)nb;
	not_prime = 1;
	while (not_prime)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
