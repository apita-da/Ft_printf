# include "libftprintf.h"

void		ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(const char *str, t_struct *s)
{
	int	i;

	i = -1;
	if(!s->flag.prec)
	{
		while (str[++i] != '\0')
		{
			ft_putchar(str[i]);
		}
	}
	else
	{
		while (str[++i] != '\0' && s->flag.prec)
		{
			ft_putchar(str[i]);
			s->flag.prec--;
			s->ret++;
		}
	}
}
