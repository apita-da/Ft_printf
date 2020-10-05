/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 19:31:13 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/03 21:42:04 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

<<<<<<< HEAD
void	ft_put_pointer(t_struct *s)
{
	unsigned long int	c;
	int					len;
	char				space;

	c = (unsigned long)va_arg(s->argv, unsigned long);
	if (!c || c == '0')
		ft_putstr("0x", s);
	len = ft_count_hex(c) + 2;
	s->flag.width = s->flag.width - (len > s->flag.prec ? len : s->flag.prec);
	s->flag.prec = s->flag.prec - len;
	space = ' ';
	if (s->flag.zero == 1)
		space = '0';
	while (s->flag.minus == -1 && s->flag.width-- > 0)
		ft_putchar(space, s);
	ft_putstr("0x", s);
	while ((s->flag.prec-- > 0) || (s->flag.prec > s->flag.width))
		ft_putchar('0', s);
	ft_putnbrbase(c, "0123456789abcdef", s);
	while (s->flag.minus == 1 && s->flag.width-- > 0)
		ft_putchar(space, s);
}
=======
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
		if (--s->flag.prec > 0)
			ft_putchar('0', s);
		ft_putnbrbase(c, "0123456789abcdef", s);
	}
	else
	{
		ft_putstr("0x", s);
		if (--s->flag.prec > 0)
			ft_putchar('0', s);
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
		if (--s->flag.prec > 0)
			ft_putchar('0', s);
		ft_putnbrbase(c, "0123456789abcdef", s);
	}
	else
	{
		while (width-- > 0)
		{
			ft_putchar(' ', s);
		}
		ft_putstr("0x", s);
		if (--s->flag.prec > 0)
			ft_putchar('0', s);
		ft_putnbrbase(c, "0123456789abcdef", s);
	}
}

void	ft_put_pointer(t_struct *s)
{
 	if (s->flag.minus == 1)
 		ft_put_minus_p(s);
 	else
 		ft_put_width_p(s);
}
// void	ft_put_pointer(t_struct *s)
// {
// 	unsigned long int	c;
// 	int					len;
// 	char				space;

// 	c = (unsigned long)va_arg(s->argv, unsigned long);
// 	if (!c || c == '0')
// 		ft_putstr("0x", s);
// 	len = ft_count_hex(c) + 2;
// 	s->flag.width = s->flag.width - (len > s->flag.prec ? len : s->flag.prec);
// 	s->flag.prec = s->flag.prec - len;
// 	space = ' ';
// 	if (s->flag.zero == 1)
// 		space = '0';
// 	while (s->flag.minus == -1 && s->flag.width-- > 0)
// 		ft_putchar(space, s);
// 	ft_putstr("0x", s);
// 	while ((s->flag.prec-- > 0) || (s->flag.prec > s->flag.width))
// 		ft_putchar('0', s);
// 	ft_putnbrbase(c, "0123456789abcdef", s);
// 	while (s->flag.minus == 1 && s->flag.width-- > 0)
// 		ft_putchar(space, s);
// }
>>>>>>> 054b63dd9f913283d6b3bc66880e431e0727ddef
