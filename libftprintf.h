/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:47:19 by apita-da          #+#    #+#             */
/*   Updated: 2020/03/10 14:33:03 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>


typedef	struct	s_flags
{
	int		minus;
	int		zero;
	int		star;
	int		width;
	int		prec;
}				t_flags;

typedef	struct s_struct
{
	int		i;
	int		ret; //return del print
	va_list	argv;
	t_flags	flag;
}				t_struct;

int		ft_printf(const char *, ...);
void	ft_handle(t_struct *s, const char *str);
void	ft_putstr(const char *str , t_struct *s);
void	ft_put_c(t_struct *s);
void	ft_put_str(t_struct *s);
void	ft_put_dig(t_struct *s);
char	ft_putnbrbase(long long n, char *base, t_struct *s);
void	ft_iniflags(t_struct *s);
int		ft_flag_recon(t_struct *s, const char *str);
int		ft_strlenprint(const char *str);

# endif
