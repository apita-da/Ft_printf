# include "libftprintf.h"

void	ft_put_str(t_struct *s)
{
	int				len;
	const char		*str;
	int				prec;

	str = va_arg(s->argv, const char *);
	prec = s->flag.prec;
	len = ft_strlenprint(str, prec);
	if (s->flag.prec)
	{
		
		s->flag.width = 1 + s->flag.width - s->flag.prec;
		if (s->flag.minus == 1)
		{
				ft_putstr(str, s);
				while(--s->flag.width)
				{
					write(1, " ", 1);
					s->ret++;
				}
		}
		else
		{
			while(--s->flag.width)
			{
				write(1, " ", 1);
				s->ret++;
			}
			ft_putstr(str, s);						
		}
	}
	
	else
	{
		s->flag.width = 1 + s->flag.width - len;
		if (s->flag.minus == 1)
		{
			ft_putstr(str, s);
			while(--s->flag.width)
			{
				write(1, "a", 1);
				s->ret++;
			}
		}
		else
		{
			while(--s->flag.width)
			{
				write(1, " ", 1);
				s->ret++;
			}
			ft_putstr(str, s);						
		}
	}
}
	