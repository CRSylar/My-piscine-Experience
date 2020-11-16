/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:46:32 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/29 19:47:49 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_argcmp(char *arg1, char *arg2)
{
	int	i;

	i = 0;
	while (arg1[i] && arg2[i] && (arg1[i] == arg2[i]))
		i++;
	return (arg1[i] - arg2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (argc - 1 > i++)
	{
		j = 0;
		while (argc - 1 > ++j)
		{
			if (ft_argcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
