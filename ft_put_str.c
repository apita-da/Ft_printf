/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:46:55 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/01 22:35:34 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_str_prec(t_struct *s)
{
	int				len;
	const char		*str;
	int				width;

	str = va_arg(s->argv, const char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	width = s->flag.width;
	width = 1 + width - (len > s->flag.prec ? s->flag.prec : len);
	if (s->flag.minus == 1)
	{
		ft_putstr(str, s);
		while (--width > 0)
			ft_putchar(' ', s);
	}
	else
	{
		while (--width > 0)
			ft_putchar(' ', s);
		ft_putstr(str, s);
	}
}

void	ft_put_str(t_struct *s)
{
	int				len;
	const char		*str;
	int				width;

	str = va_arg(s->argv, const char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (s->flag.prec_zero == 1)
		ft_putstr(str, s);
	width = s->flag.width;
	width = 1 + width - len;
	if (s->flag.minus == 1)
	{
		ft_putstr(str, s);
		while (--width > 0)
			ft_putchar(' ', s);
	}
	else
	{
		while (--width > 0)
			ft_putchar(' ', s);
		ft_putstr(str, s);
	}
}
