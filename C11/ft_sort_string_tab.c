/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:08:32 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/06 13:08:35 by cromalde         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i])
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_arrswap(&tab[i], &tab[i + 1])
			j++
		}
		i++;
	}
}