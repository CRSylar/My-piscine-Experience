/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:00:46 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/25 09:53:17 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	stampa(int n, int arr[n])
{
	int i;

	i = 0;
	while (i < n)
	{
		putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 9 - n + 1)
	{
		putchar(',');
		putchar(' ');
	}
}

void	checkstmp(int n, int arr[n])
{
	int i;
	int	stmp;

	i = 0;
	stmp = 0;
	while (i < n - 1)
	{
		if ((arr[i] < arr[i + 1]) || n == 1)
			stmp = 1;
		else
		{
			stmp = 0;
			break ;
		}
		i++;
	}
	if (stmp == 1)
		stampa(n, arr);
}

void	creaciclo(int n, int k, int arr[n])
{
	if (k < n - 1)
	{
		arr[k] = k;
		while (arr[k] <= 9)
		{
			if (!((arr[0] <= 9 - n + 1)))
				break ;
			else
			{
				creaciclo(n, k + 1, arr);
				arr[k]++;
			}
		}
	}
	else
	{
		arr[k] = k;
		while (arr[k] <= 9)
		{
			checkstmp(n, arr);
			arr[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int arr[n];
	int i;

	i = 0;
	if (n < 1 || n > 9)
		return ;
	if (n == 1)
	{
		while (i <= 9)
		{
			putchar(i + '0');
			if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		return ;
	}
	creaciclo(n, 0, arr);
}
