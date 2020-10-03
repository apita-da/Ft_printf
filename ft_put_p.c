/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 19:31:13 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/01 19:32:53 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_minus_p(t_struct *s)
{
	unsigned long int	c;
	int					width;
	int					len;

	c = (long)va_arg(s->argv, void *);
	width = s->flag.width;
	len = ft_count_hex(c);
	width = width - (len + 2);
	if (len > width)
	{
		ft_putstr("0x", s);
		ft_putnbrbase(c, "0123456789abcdef", s);
	}
	else
	{
		ft_putstr("0x", s);
		ft_putnbrbase(c, "0123456789abcdef", s);
		while (width-- > 0)
		{
			ft_putchar(' ', s);
		}
	}
}

void	ft_put_width_p(t_struct *s)
{
	unsigned long int	c;
	int					width;
	int					len;

	c = (long)va_arg(s->argv, void *);
	width = s->flag.width;
	len = ft_count_hex(c);
	width = width - (len + 2);
	if (len > width)
	{
		ft_putstr("0x", s);
		ft_putnbrbase(c, "0123456789abcdef", s);
	}
	else
	{
		while (width-- > 0)
		{
			ft_putchar(' ', s);
		}
		ft_putstr("0x", s);
		ft_putnbrbase(c, "0123456789abcdef", s);
	}
}

void	ft_put_pointer(t_struct *s)
{
	unsigned long int	c;

	c = (long)va_arg(s->argv, void *);
	if (!c)
		ft_putstr("0x", s);
	// if (!c && s->flag.width < 2)
	// {
	// 	if (s->flag.prec = 0 && s->flag.width < 2)
	// 		s->flag.width = 2;
	// 	ft_putstr("0x0", s);
	// 	return ;
	// }
	if (s->flag.prec != 0)
		s->flag.zero = 1;
	if (s->flag.minus == 1)
		ft_put_minus_p(s);
	else
		ft_put_width_p(s);
}
