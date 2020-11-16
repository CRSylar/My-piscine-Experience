/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:50:45 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/08 19:51:52 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>

char	*g_prog;
char	*g_buffer;

void	ft_open_file(int fd, int size)
{
	long int	index;
	long int	tmp;

	if (size == 0)
	{
		while (read(fd, g_buffer, 1))
			if (errno)
				return ;
	}
	else
	{
		index = 0;
		while (read(fd, &g_buffer[(index / size)], 1))
		{
			if (errno)
				return ;
			index++;
		}
		tmp = index % size;
		if (index >= size)
			write(1, g_buffer + tmp, size - tmp);
		write(1, g_buffer, tmp);
	}
}

void	ft_open(int argc, char *argv[], int size)
{
	int i;
	int k;
	int fd;

	i = 2;
	k = 0;
	while (i++ < argc)
	{
		errno = 0;
		if ((fd = open(argv[i], O_RDONLY)) == -1)
		{
			ft_errmsg(argv[i]);
			continue ;
		}
		if (argc > 4)
		{
			if (k)
				ft_putstr("\n");
			ft_putstr("==>");
			ft_putstr(argv[i]);
			ft_putstr("<==");
		}
		k = 1;
		ft_open_file(fd, size);
		close(fd);
	}
}
	
int main(int argc, char **argv)
{
	int size;
	char *g_buffer;

	g_prog = argv[0];
	size = ft_atoi(argv[1]);
	printf("%d\n", size);
	if (!(g_buffer = (char*)malloc(size + 1)))
		return (-1);
	if (argc == 3)
		ft_open_file(0, size);
	else
		ft_open(argc, argv, size);
	free(g_buffer);
	return (0);
}