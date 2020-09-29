# include "libftprintf.h"

void    ft_put_dig(t_struct *s)
{
    long int     c;
    int         width;
    int         prec;
    int         len;

    c = va_arg(s->argv, long int);
    width = s->flag.width;
    prec = s->flag.prec;
    len = ft_count_num(c);
  
    if (prec < len && width < len)
        ft_putnbrbase(c, "0123456789", s);
    width = 1 + width - len + (c < 0 ? 1 : 0);
    if (s->flag.minus == 1)
    {
        while (prec > len)
        {
            ft_putchar('0', s);
            prec--;
            width--;
        }
        ft_putnbrbase(c, "0123456789", s);
        while (--width > 0)
            ft_putchar(' ', s);
    }
    else
    {
        while (width > len)
        {
            ft_putchar(' ', s);
            width--;
        }   
        while (prec > len)
        {
            ft_putchar('0', s);
            width--;
            prec--;
        }
        ft_putnbrbase(c, "0123456789", s);
    }
}
// while (--width && width > 0)
//         {            
//             if (s->flag.zero == 1)
//                 ft_putchar('0', s);
//             else
//             {
//                  ft_putchar(' ', s);
//             }
//         }
//         ft_putnbrbase(c, "0123456789", s);	

