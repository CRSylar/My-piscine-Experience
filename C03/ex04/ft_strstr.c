/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:05:55 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/29 11:48:04 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int k;

	i = 0;
	k = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (str + i);
			k++;
		}
		k = 0;
		i++;
	}
	return ((void *)0);
}
