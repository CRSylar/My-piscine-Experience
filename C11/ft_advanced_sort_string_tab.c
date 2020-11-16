/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:31:47 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/06 13:31:50 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_arrswap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_arlen(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i)
}

void	ft_adevanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int len;
	int	i;

	i = 0;
	len = ft_arlen(tab);
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
				ft_arrswap(&tab[i], &tab[i + 1])
			j++
		}
		i++;
	}
}