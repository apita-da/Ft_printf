/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:40:40 by apita-da          #+#    #+#             */
/*   Updated: 2020/09/30 17:40:40 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void	ft_put_str_prec(t_struct *s)
{
	int				len;
	const char		*str;
	int				width;
	int				prec;

	str = va_arg(s->argv, const char *);
	if(str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	width = s->flag.width;
	prec = s->flag.prec;
	
	width = 1 + width - (len > prec ? prec : len);
	if (s->flag.minus == 1)
	{
		ft_putstr(str, s);
		while(--width > 0)
			ft_putchar(' ', s);
	}
	else
	{
		while(--width > 0)
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
	if(str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	width = s->flag.width;
	width = 1 + width - len;
	if (s->flag.minus == 1)
	{
		ft_putstr(str, s);
		while(--width > 0)
			ft_putchar(' ', s);
	}
	else
	{
		while(--width > 0)
			ft_putchar(' ', s);
		ft_putstr(str, s);						
	}
}
