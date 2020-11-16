/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:24:40 by grusso            #+#    #+#             */
/*   Updated: 2020/11/04 09:00:50 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;
	int conta;

	conta = 0;
	div = 1;
	if (nb <= 0)
		return (0);
	while (conta < 3 && div <= nb / 2)
	{
		if (nb % div == 0)
			conta++;
		div++;
	}
	if (conta == 1)
		return (1);
	else
		return (0);
}
