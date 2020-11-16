

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

extern char *g_prog;

void	ft_putstr(char *str);
void	ft_errmsg(char *file);
int		ft_atoi(char *str);

#endif