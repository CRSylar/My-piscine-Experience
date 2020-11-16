/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:57:12 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/27 17:47:30 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int i;
	unsigned	int out;

	i = 0;
	out = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		out = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (out == 0)
			i++;
		else
			return (out);
	}
	return (out);
}
