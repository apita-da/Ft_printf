# include "libftprintf.h"

void	ft_put_str(t_struct *s)
{
	int				len;
	const char		*str;

	str = va_arg(s->argv, const char *);
	len = ft_strlenprint(str);
	
	
	if(len >= s->flag.width && len >= s->flag.prec)
		ft_putstr(str, s);
	else
	{
		s->flag.width = 1 + s->flag.width - len;
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
			if (s->flag.prec)
			{
				while(--s->flag.width)
				{
					write(1, " ", 1);
					s->ret++;
				}
				ft_putstr(str, s);
				s->ret--;
			}
		}
	}
}