/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:07:45 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/05 20:07:48 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>

char	*g_prog;

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

void	ft_errmsg(char *file)
{
	ft_putstr(basename(g_prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	ft_open_file(int fd, char *nfile)
{
	long int		size;
	unsigned char	buffer[1];
	while ((size = read(fd, buffer, 1)))
	{
		if (errno)
		{
			ft_errmsg(nfile);
			return ;
		}
		write(1, buffer, size);
	}

}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	
	i = 1;
	g_prog = argv[0];
	if (argc == 1)
		ft_open_file(0, 0);
	else
	{
		while (i < argc)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
			{
				ft_errmsg(argv[i]);
				continue ;
			}
			ft_open_file(fd, argv[1]);
			close(fd);
			i++;
		}
	}
	return (0);
}