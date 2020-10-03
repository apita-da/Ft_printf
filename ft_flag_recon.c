/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_recon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:39:22 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/03 19:19:18 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flag_recon(t_struct *s, const char *str)
{
	s->i++;
	if (str[s->i] == '0')
	{
		s->flag.zero = 1;
		s->i++;
	}
	if (str[s->i] == '-')
	{
		s->flag.minus = 1;
		s->flag.zero = 0;
		s->i++;
	}
	ft_flag_recon2(s, str);
	ft_flag_recon3(s, str);
}

void	ft_flag_recon2(t_struct *s, const char *str)
{
	while (str[s->i] > 47 && str[s->i] < 58)
	{
		s->flag.width = s->flag.width * 10 + (str[s->i] - 48);
		s->i++;
	}
	if (str[s->i] == '*')
	{
		s->flag.width = va_arg(s->argv, int);
		s->i++;
		if (s->flag.width < 0)
		{
			s->flag.zero = 0;
			s->flag.minus = 1;
			s->flag.width *= -1;
		}
	}
}

void	ft_flag_recon3(t_struct *s, const char *str)
{
	if (str[s->i] == '.')
	{
		s->flag.zero = 0;
		s->i++;
		if (str[s->i] == '*')
		{
			s->flag.prec = va_arg(s->argv, int);
			s->i++;
			if (s->flag.prec < 0 && s->flag.width != 0)
			{
				s->flag.zero = 0;
				s->flag.prec = s->flag.width;
			}
		}
		else if (!(str[s->i] > 47 && str[s->i] < 58))
			s->flag.prec = 0;
		else
		{
			while (str[s->i] > 47 && str[s->i] < 58)
			{
				s->flag.prec = s->flag.prec * 10 + (str[s->i] - 48);
				s->i++;
			}
		}
		if (s->flag.prec == 0)
		{
			s->flag.prec_zero = 1;
		}
	}
}
