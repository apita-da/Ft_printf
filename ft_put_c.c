# include "libftprintf.h"

void		ft_putchar(char c, t_struct *s)
{
	write (1, &c, 1);
	s->ret++;
}
void	ft_put_c(t_struct *s)
{
	int	c;

	c = va_arg(s->argv, int);
	if (s->flag.minus == 1)
	{
		ft_putchar(c, s);
		while(s->flag.width > 1)
		{
			ft_putchar(' ', s);
			s->flag.width--;
		}
	}
	else
	{
		while(s->flag.width > 1)
		{
			ft_putchar(' ', s);
			s->flag.width--;
		}
		ft_putchar(c, s);
	}
}