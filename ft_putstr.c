/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:47:05 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/05 20:08:50 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_strlen(const char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

void	ft_putstr(const char *str, t_struct *s)
{
	int	i;

	i = -1;
	if (s->flag.prec > 0)
	{
		while (str[++i] != '\0' && s->flag.prec != 0)
		{
			ft_putchar(str[i], s);
			s->flag.prec--;
		}
	}
	else if (s->flag.prec_zero == 1)
	{
		while (--s->flag.width >= 0)
			ft_putchar(' ', s);
	}
	else
	{
		while (str[++i] != '\0')
		{
			ft_putchar(str[i], s);
		}
	}
}
