/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 12:40:55 by cromalde          #+#    #+#             */
/*   Updated: 2020/11/11 17:39:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;

	i = 0;
	size = size - 1;
	while (src[i] && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	ddest[i] = '\0';
	return (i);
}
