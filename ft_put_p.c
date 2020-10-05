/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 19:31:13 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/05 21:05:19 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_pointer(t_struct *s)
{
	unsigned long int	c;
	int					len;

	c = (unsigned long)va_arg(s->argv, unsigned long);
	if ((c == 0 && !s->flag.width) && (s->flag.prec > 2))
		ft_p_zero(s);
	else if ((void *)c == NULL && s->flag.width < 2)
		ft_p_nullwidth(s);
	else if ((void *)c == NULL && s->flag.prec_zero == 1)
		ft_p_nullprec(s);
	else
	{
		len = ft_count_hex(c) + 2;
		s->flag.width = s->flag.width - (len > s->flag.prec ?\
			len : s->flag.prec);
		s->flag.prec = s->flag.prec - len;
		while (s->flag.minus == -1 && s->flag.width-- > 0)
			ft_putchar(' ', s);
		ft_putstr("0x", s);
		while ((s->flag.prec-- > 0) || (s->flag.prec-- > s->flag.width))
			ft_putchar('0', s);
		ft_putnbrbase(c, "0123456789abcdef", s);
		while (s->flag.minus == 1 && s->flag.width-- > 0)
			ft_putchar(' ', s);
	}
}

void	ft_p_zero(t_struct *s)
{
	ft_putchar('0', s);
	ft_putchar('x', s);
	while (s->flag.prec-- > 0)
		ft_putchar('0', s);	
}

void	ft_p_nullwidth(t_struct *s)
{
	if (s->flag.prec_zero == 1 && s->flag.width < 2)
		s->flag.width = 2;
		while (s->flag.prec_zero == 1 && --s->flag.width)
		{
			ft_putchar('0', s);
			ft_putchar('x', s);
		}
	ft_putstr("0x0", s);
}

void	ft_p_nullprec(t_struct *s)
{
	s->flag.width = s->flag.width - 2;
	while (s->flag.width-- > 0)
		ft_putchar(' ', s);
	ft_putchar('0', s);
	ft_putchar('x', s);
}