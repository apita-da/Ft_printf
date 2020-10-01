/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_recon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:39:18 by apita-da          #+#    #+#             */
/*   Updated: 2020/09/30 17:39:18 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flag_recon(t_struct *s, const char *str)
{
	s->i++;
	if (str[s->i] == '0' && (s->flag.zero == 1))
		s->i++;
	if (str[s->i] == '-' && (s->flag.minus ==1))
		s->i++;
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
			s->flag.minus = 1;
			s->flag.width *= -1;
		}
	}
	ft_flag_recon2(s, str);
}
void	ft_flag_recon2(t_struct *s, const char *str)
{
	if (str[s->i] == '.')
	{
		s->i++;
		if (str[s->i] == '*')
		{
			s->flag.prec = va_arg(s->argv, int);
			s->i++;
		}
		else
		{
			while (str[s->i] > 47 && str[s->i] < 58)
			{
				s->flag.prec = s->flag.prec * 10 + (str[s->i] - 48);
				s->i++;
			}
		}
	}
}
