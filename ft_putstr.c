# include "libftprintf.h"

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}
void	ft_putstr(t_struct *s)
{
	char 	*str;

	str = va_arg(s->argv, char*);
	while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
			s->ret++;
		}
}