# include "libftprintf.h"

void	ft_put_str(t_struct *s)
{
	char	*c;
	
	c = va_arg(s->argv, char*);
	
	// if(ft_strlen(c) <= (size_t)s->flag.width)
	// 	s->flag.width = s->flag.width - ft_strlen(c);
	
	while (c[s->flag.width] != '\0')
	{
		if (s->flag.minus == 1)
		{
			ft_putstr(s, c);
			while(c[s->flag.width])
			{
			write(1, " ", 1);
			s->ret++;
			s->flag.width--;
			}
		printf("3 paso\n");
		}
		else
		{
			while(c[s->flag.width])
			{
				write(1, " ", 1);
				s->flag.width--;
				s->ret++;
			}
			ft_putstr(s, c);
			printf("3 paso\n");
		}
	s->flag.width--;
	}
}