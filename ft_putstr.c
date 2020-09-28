# include "libftprintf.h"

void		ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(const char *str, t_struct *s)
{
	int	i;

	i = 0;

	{
		while (str[i] != '\0' && s->flag.prec)
		{
			ft_putchar(str[i]);
			i++;
			s->flag.prec--;
			s->ret++;
		}
		s->ret++;
	}
}