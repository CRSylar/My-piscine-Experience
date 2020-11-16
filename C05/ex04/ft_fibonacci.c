/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 08:49:25 by cromalde          #+#    #+#             */
/*   Updated: 2020/10/29 09:25:12 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		out;
	char	*fibo;

	fibo = "0112";
	if (index < 0)
		return (-1);
	if (index <= 3)
		return (fibo[index] - '0');
	else
		out = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (out);
}
