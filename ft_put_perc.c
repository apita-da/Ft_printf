/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_perc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:54:04 by apita-da          #+#    #+#             */
/*   Updated: 2020/09/30 21:30:02 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_perc(t_struct *s)
{
	int	c;
	int	space;

	c = '%';
	if (s->flag.minus == 1)
		space = ' ';
	else if (s->flag.zero == 1)
		space = '0';
	else
		space = ' ';
	if (s->flag.minus == 1)
	{
		ft_putchar(c, s);
		while(s->flag.width-- > 1)
			ft_putchar(space, s);
	}
	else
	{
		while(s->flag.width-- > 1 || (s->flag.zero == 1 && s->flag.width--))
			ft_putchar(space, s);
		ft_putchar(c, s);
	}
}