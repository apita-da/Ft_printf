# include "libftprintf.h"

void	ft_putstrs(t_struct *s, char *c)
{
	int		i;

	i = 0;
	
	c = va_arg(s->argv, char*);
	while (c[i] != '\0')
	{
		write (1, &c, 1);
		i++;
	}
}