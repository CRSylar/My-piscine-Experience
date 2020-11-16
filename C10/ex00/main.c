/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:39:13 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/05 18:39:16 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	c;

	fd = 0;
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_putstr("cannot read the file.\n");
	else
	{
		size = read(fd, &c, 1);
		while (size > 0)
		{
			write(1, &c, 1);
			size = read(fd, &c, 1);
		}
		close(fd);
	}
}