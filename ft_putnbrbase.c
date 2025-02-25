/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:40:51 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/03 21:16:20 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	ft_putnbrbase(long long n, char *base, t_struct *s)
{
	if (n < 0)
		n *= -1;
	if (n > (long long)ft_strlen(base + 1))
		ft_putnbrbase(n / ft_strlen(base), base, s);
	write(1, &base[n % ft_strlen(base)], 1);
	s->ret++;
	return (0);
}

int		ft_count_num(int num)
{
	int i;

	i = 0;
	if (num < 0)
		i++;
	if (num == 0)
	 	i = 1;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int		ft_count_hex(long int num)
{
	int i;

	i = 0;
	if (num == 0)
		i = 1;
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}
