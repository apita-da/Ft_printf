/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:39:29 by apita-da          #+#    #+#             */
/*   Updated: 2020/09/30 17:39:29 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void	ft_handle(t_struct *s, const char *str)
{
	if (str[s->i] == 'c')
		ft_put_c(s);
	if (str[s->i] == 's')
	{
		if (s->flag.prec)
			ft_put_str_prec(s);
		else
			ft_put_str(s);
	}
	if (str[s->i] == 'd' || str[s->i] == 'i') 
		ft_put_dig(s);
	if (str[s->i] == 'u') 
		ft_put_dig_u(s);
	if (str[s->i] == 'x') 
		ft_put_dig_x(s);
	if (str[s->i] == 'X') 
		ft_put_dig_X(s);
	if (str[s->i] == 'p') 
		ft_put_pointer(s);
	if (str[s->i] == '%')
		ft_put_perc(s);
}