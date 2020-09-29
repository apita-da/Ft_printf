# include "libftprintf.h"

int    ft_count_num(long int num)
{
    int i;
    
    i = 0;
    while (num != 0)
    {
        num = num / 10;
        i++;
    }
    return (i);
}
void    ft_put_dig(t_struct *s)
{
    int     c;

    c = va_arg(s->argv, long int);
  
    s->flag.width = s->flag.width - ft_count_num(c) + (c < 0 ? 1 : 0);
    if (s->flag.minus == 1)
    {
        while (s->flag.prec > ft_count_num(c))
        {
            write(1, "0", 1);
            s->flag.prec--;
            //s->flag.width--;
        }
        ft_putnbrbase(c, "0123456789", s);
        while (s->flag.width)
        { 
            printf("%d", s->flag.width);
            write(1, " ", 1);
            s->flag.width--;
            s->ret++;
        }
    }
    else
    {
        while (s->flag.width > ft_count_num(c))
        {
            write (1, " ", 1);
            s->flag.width--;
        }
        while (s->flag.prec > ft_count_num(c))
        {
            write(1, "0", 1);
            s->flag.prec--;
        }
        while (s->flag.width && s->flag.width > 0)
        {            
            if (s->flag.zero == 1)
            {
                write(1, "0", 1);
                s->ret++;
            }
            else
            {
                write(1, " ", 1);
                s->ret++;
            }
        s->flag.width--;
        }
        ft_putnbrbase(c, "0123456789", s);	
    } 
}