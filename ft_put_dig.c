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
   	if(ft_count_num(c) <= s->flag.width)
    	s->flag.width = 1 + s->flag.width - ft_count_num(c);
    if (s->flag.minus == 1)
    {
        ft_putnbrbase(c, "0123456789", s);
        while (--s->flag.width)
           { 
			   write(1, " ", 1);
				s->ret++;
			}
    }
    else
    {
        while (--s->flag.width)
           {
			   write(1, " ", 1);
				s->ret++;
			}
        ft_putnbrbase(c, "0123456789", s);	
    }
}