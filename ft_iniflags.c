/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iniflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:46:16 by apita-da          #+#    #+#             */
/*   Updated: 2020/10/01 21:57:54 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_iniflags(t_struct *s)
{
	s->flag.minus = -1;
	s->flag.zero = 0;
	s->flag.star = 0;
	s->flag.width = 0;
	s->flag.prec = 0;
	s->flag.prec_zero = 0;
}
