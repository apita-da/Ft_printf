# include "libftprintf.h"

void	ft_put_str(t_struct *s)
{
	int				len;
	const char		*str;

	str = va_arg(s->argv, const char *);
	len = ft_strlenprint(str);
	
	if (s->flag.prec)
	{
		s->flag.width = s->flag.width - (len > s->flag.prec ? s->flag.prec : len);
		if (s->flag.minus == 1)
		{
			ft_putstr(str, s);
			while(s->flag.width > 0)
			{
				write(1, " ", 1);
				s->ret++;
				s->flag.width--;
			}
		}
		else
		{
			while(s->flag.width > 0)
			{
				write(1, " ", 1);
				s->ret++;
				s->flag.width--;
			}
			ft_putstr(str, s);						
		}
	}
	else
	{
		s->flag.width = s->flag.width - len;
		if (s->flag.minus == 1)
		{
			ft_putstr(str, s);
			while(s->flag.width > 0)
			{
				write(1, " ", 1);
				s->ret++;
				s->flag.width--;
			}
		}
		else
		{
			while(s->flag.width > 0)
			{
				write(1, " ", 1);
				s->ret++;
				s->flag.width--;
			}
			ft_putstr(str, s);						
		}
	}
}
	