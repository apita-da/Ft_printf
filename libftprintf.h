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
//generales
int		ft_printf(const char *, ...);
void	ft_iniflags(t_struct *s);
void	ft_flag_recon(t_struct *s, const char *str);
void	ft_flag_recon2(t_struct *s, const char *str);
void	ft_handle(t_struct *s, const char *str);
//handle str
void	ft_put_c(t_struct *s);
void	ft_putstr(const char *str , t_struct *s);
void	ft_put_str(t_struct *s);
void	ft_put_str_prec(t_struct *s);
void	ft_str_minus(const char * str, t_struct *s);
void	ft_str(const char * str, t_struct *s);
//handle d & i
void	ft_put_dig(t_struct *s);
void	ft_put_dig_minus(t_struct *s);
void	ft_put_prec(t_struct *s);
void    ft_put_zero(t_struct *s);
//handle u
void	ft_put_dig_u(t_struct *s);
void	ft_put_dig_minus_u(t_struct *s);
void	ft_put_prec_u(t_struct *s);
void    ft_put_zero_u(t_struct *s);
//handle x
void	ft_put_dig_x(t_struct *s);
void	ft_put_dig_minus_x(t_struct *s);
void	ft_put_prec_x(t_struct *s);
void    ft_put_zero_x(t_struct *s);
//handle X
void	ft_put_dig_X(t_struct *s);
void	ft_put_dig_minus_X(t_struct *s);
void	ft_put_prec_X(t_struct *s);
void    ft_put_zero_X(t_struct *s);
//handle puntero
void	ft_put_pointer(t_struct *s);
void	ft_put_minus_p(t_struct *s);
void	ft_put_width_p(t_struct *s);
//porcentaje
void	ft_put_perc(t_struct *s);
//utiles generales
void	ft_putchar(char c, t_struct *s);
int		ft_strlen(const char *str);
int		ft_count_num(long int num);
int		ft_count_hex(long int num);
char	ft_putnbrbase(long long n, char *base, t_struct *s);
# endif
