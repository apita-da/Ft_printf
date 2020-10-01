/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:40:51 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/01 20:53:40 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	ft_putnbrbase(long long n, char *base, t_struct *s)
{
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		s->ret++;
	}
	if (n > (long long)ft_strlen(base))
		ft_putnbrbase(n / ft_strlen(base), base, s);
	write(1, &base[n % ft_strlen(base)], 1);
	s->ret++;
	return (0);
}

int		ft_count_num(long int num)
{
	int i;

	i = 0;
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
