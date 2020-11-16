/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:57:57 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/28 17:26:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ch_is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		is_upcase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		is_lowcase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		neww;

	i = 0;
	neww = 1;
	while (str[i])
	{
		if (is_lowcase(str[i]) && (neww == 1))
			str[i] = str[i] - 32;
		if (is_upcase(str[i]) && (neww == 0))
			str[i] = str[i] + 32;
		if (ch_is_alpha(str[i]))
			neww = 0;
		else
			neww = 1;
		i++;
	}
	return (str);
}
