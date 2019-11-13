/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:23:54 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/12 19:32:14 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *n)
{
	long int i[2];
	long int x;

	i[0] = 0;
	x = 0;
	i[1] = 1;
	while (n[i[0]] == 32 || (n[i[0]] >= 9 && n[i[0]] <= 13))
		i[0]++;
	if (n[i[0]] < '0' && n[i[0]] > '9' && n[i[0]] != '-' && n[i[0]] != '+')
		return (0);
	if (n[i[0]] == '-')
	{
		i[1] = (i[1] * -1);
		i[0]++;
	}
	while (('9' >= n[i[0]]) && (n[i[0]] >= '0'))
	{
		x = (x * 10 + (n[i[0]] - '0'));
		i[0]++;
		if (x * i[1] > 2147483647)
			return (-1);
		else if (x * i[1] < -2147483648)
			return (0);
	}
	return (x * i[1]);
}
