# include "libftprintf.h"

void	ft_putstrs(t_struct *s, char *c)
{
	//s->ret++;
	

	if (s->flag.minus == 1)
	{
		write(1, &c, 1);
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
		write(1, &c, 1);
	}
}