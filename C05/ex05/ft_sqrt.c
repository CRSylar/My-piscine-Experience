/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:40:06 by grusso            #+#    #+#             */
/*   Updated: 2020/11/03 18:28:32 by grusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}
