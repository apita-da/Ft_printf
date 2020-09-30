# include "libftprintf.h"

void    ft_put_dig_minus(t_struct *s)
{
    long int     c;
    int         width;
    int         len; //se puede quitar

    c = va_arg(s->argv, long int);
    width = s->flag.width;
    len = ft_count_num(c);
    if (s->flag.prec <= len && width <= len)
        ft_putnbrbase(c, "0123456789", s);
    else
    {
        width = 1 + width - len + (c < 0 ? 1 : 0);
        while (s->flag.prec > len)
        {
            ft_putchar('0', s);
            s->flag.prec--;
            width--;
        }
        ft_putnbrbase(c, "0123456789", s);
        while (--width > 0)
            ft_putchar(' ', s);
    }
}

void    ft_put_prec(t_struct *s)
{
    long int     c;
    int         width;
    int         len; //se puede quitar

    c = va_arg(s->argv, long int);
    width = s->flag.width;
    len = ft_count_num(c);
    if (s->flag.prec <= len && width <= len)
        ft_putnbrbase(c, "0123456789", s);
    else
    {   
        width = 1 + width - s->flag.prec + (c < 0 ? 1 : 0); 
        while (--width > 0)
            ft_putchar(' ', s); 
        while (s->flag.prec > len)
        {
            ft_putchar('0', s);
            width--;
            s->flag.prec--;
        }
        ft_putnbrbase(c, "0123456789", s);
    }
}

void    ft_put_zero(t_struct *s)
{
    long int     c;
    int         width;
    int         len; //se puede quitar

    c = va_arg(s->argv, long int);
    width = s->flag.width;
    len = ft_count_num(c);
    width = 1 + width - len + (c < 0 ? 1 : 0);
    while (--width && width > 0)
    {            
        if (s->flag.zero == 1)
            ft_putchar('0', s);
        else
            ft_putchar(' ', s);
    }
    ft_putnbrbase(c, "0123456789", s);	
}
//no funciona cuando el númerno es neg
void    ft_put_dig(t_struct *s) //falta error con int null?
{
    if (s->flag.minus == 1)
        ft_put_dig_minus(s);
    else if (!s->flag.zero && s->flag.prec != 0)
        ft_put_prec(s);
    else
        ft_put_zero(s);    
}

    


