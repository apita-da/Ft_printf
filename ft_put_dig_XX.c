/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_dig_XX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:40:11 by apita-da          #+#    #+#             */
/*   Updated: 2020/09/30 22:01:08 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void    ft_put_dig_minus_X(t_struct *s)
{
    unsigned long int       c;
    int                     width;
    int                     len; //se puede quitar

    c = (unsigned int)va_arg(s->argv, unsigned int);
    width = s->flag.width;
    len = ft_count_hex(c);
    if (s->flag.prec <= len && width <= len)
        ft_putnbrbase(c, "012345689ABCDEF", s);
    else
    {
        width = 1 + width - len;
        while (s->flag.prec > len)
        {
            ft_putchar('0', s);
            s->flag.prec--;
            width--;
        }
        ft_putnbrbase(c, "0123456789ABCDEF", s);
        while (--width > 0)
            ft_putchar(' ', s);
    }
}

void    ft_put_prec_X(t_struct *s)
{
    unsigned long int     c;
    int         width;
    int         len; //se puede quitar

    c = (unsigned int)va_arg(s->argv, unsigned int);
    width = s->flag.width;
    len = ft_count_hex(c);
    if (s->flag.prec <= len && width <= len)
        ft_putnbrbase(c, "0123456789ABCDEF", s);
    else
    {   
        width = 1 + width - s->flag.prec; 
        while (--width > 0)
            ft_putchar(' ', s); 
        while (s->flag.prec > len)
        {
            ft_putchar('0', s);
            width--;
            s->flag.prec--;
        }
        ft_putnbrbase(c, "0123456789ABCDEF", s);
    }
}

void    ft_put_zero_X(t_struct *s)
{
    unsigned long int     c;
    int                     width;
    int         len; //se puede quitar

    c = (unsigned int)va_arg(s->argv, unsigned int);
    width = s->flag.width;
    len = ft_count_hex(c);
    width = 1 + width - len;
    while (--width && width > 0)
    {            
        if (s->flag.zero == 1)
            ft_putchar('0', s);
        else
            ft_putchar(' ', s);
    }
    ft_putnbrbase(c, "0123456789ABCDEF", s);	
}
void    ft_put_dig_X(t_struct *s) //falta error con int null?
{
    if (s->flag.minus == 1)
        ft_put_dig_minus_X(s);
    else if (!s->flag.zero && s->flag.prec != 0)
        ft_put_prec_X(s);
    else
        ft_put_zero_X(s);    
}