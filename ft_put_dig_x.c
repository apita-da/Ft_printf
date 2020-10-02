/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_dig_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:45:33 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/01 20:45:37 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_dig_x(t_struct *s)
{
	unsigned long int	c;
	int					len;
	char				space;

	c = (unsigned int)va_arg(s->argv, unsigned int);
	len = ft_count_hex(c);
	if (c == 0 && s->flag.prec_zero == 1)
		len = 0;
	s->flag.width = s->flag.width - (len > s->flag.prec ? len : s->flag.prec);
	s->flag.prec = s->flag.prec - len;
	space = ' ';
	if (s->flag.zero == 1)
		space = '0';
	while (s->flag.minus == -1 && s->flag.width-- > 0)
		ft_putchar(space, s);
	while (s->flag.prec-- > 0)
		ft_putchar('0', s);
	if (!(s->flag.prec_zero == 1 && c == 0))
		ft_putnbrbase(c, "0123456789abcdef", s);
	while (s->flag.minus == 1 && s->flag.width-- > 0)
		ft_putchar(space, s);
}	