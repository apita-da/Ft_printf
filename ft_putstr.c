# include "libftprintf.h"

void		ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(const char *str, t_struct *s)
{
	while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
			s->ret++;
		}
}