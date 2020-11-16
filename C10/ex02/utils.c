

#include "utils.h"

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

int		ft_atoi(char *str)
{
	int out;
	int i;

	i = 0;
	out = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			out = (out * 10) + (str[i] - '0');
			i++;
		}
		i++;
	}
	return (out);
}