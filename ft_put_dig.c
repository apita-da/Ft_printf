/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_dig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:46:42 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/05 20:55:10 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	flags(t_struct *s, int c)
{
	int			len;
	
	len = ft_count_num(c);
	if (s->flag.prec_zero == 1 && c == 0)
		len = 0;
	s->flag.prec = s->flag.prec + (c < 0 ? 1 : 0);
	s->flag.width = s->flag.width - (len > s->flag.prec ? len : s->flag.prec);
	s->flag.prec = s->flag.prec - len;
}

void	ft_put_dig(t_struct *s)
{
	long int	c;
	char		space;

	c = va_arg(s->argv, int);
	flags(s, c);
	space = ' ';
	if (s->flag.zero == 1)
		space = '0';
	if (c < 0 && s->flag.zero == 1)
		ft_putchar('-', s);
	while (s->flag.minus == -1 && s->flag.width-- > 0)
		ft_putchar(space, s);
	if (c < 0 && s->flag.zero != 1)
		ft_putchar('-', s);
	while (s->flag.prec-- > 0)
		ft_putchar('0', s);
	if (!(s->flag.prec_zero == 1 && c == 0))
		ft_putnbrbase(c, "0123456789", s);
	while (s->flag.minus == 1 && s->flag.width-- > 0)
		ft_putchar(space, s);	
}
