/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:56:09 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/09 20:46:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int	k;

	i = 0;
	k = 0;
	while (k < length - 1)
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) <= 0)
				i++;
			else
				return (0);
		}
		i = k;
		k++;
	}
	return (1);
}
