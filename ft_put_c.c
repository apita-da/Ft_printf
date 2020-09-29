# include "libftprintf.h"

void	ft_put_c(t_struct *s)
{
	int	c;

	c = va_arg(s->argv, int);
	if (s->flag.minus == 1)
	{
		write(1, &c, 1);
		while(s->flag.width)
		{
			write(1, " ", 1);
			s->ret++;
			s->flag.width--;
		}
	}
	else
	{
		while(s->flag.width)
		{
			write(1, " ", 1);
			s->ret++;
			s->flag.width--;
		}
		write(1, &c, 1);
	}
	s->ret++;
}