/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:18:37 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/03 13:28:31 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef	int	t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(x) (x % 2) == 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have ad odd number of arguments.\n"

#endif
