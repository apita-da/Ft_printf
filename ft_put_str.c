# include "libftprintf.h"

void	ft_put_str(t_struct *s)
{
	char	*c;
	
	c = va_arg(s->argv, char*);

	if(ft_strlen(c) <= (size_t)s->flag.width)
		s->flag.width = 1 + s->flag.width - ft_strlen(c);
	while (c[s->flag.width] != '\0')
	{
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
}