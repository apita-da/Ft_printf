#include "libftprintf.h"

int	ft_flag_recon(t_struct *s, const char *str)
{
	s->i++;
	if (str[s->i] == 0)
	{
		write(1, "0", 1);
		s->i++;
	}
	if (str[s->i] == '-')
	{
		s->flag.minus = 1;
		s->i++;
	}
	while (str[s->i] > 47 && str[s->i] < 58)
	{
		s->flag.width = s->flag.width * 10 + (str[s->i] - 48);
		s->i++;
	}
	if (str[s->i] == '*')
	{
		s->flag.width = va_arg(s->argv, int);
		s->i++;
		if (s->flag.width < 0)
		{
			s->flag.minus = 1;
			s->flag.width *= -1;
		}
	}
	if (str[s->i] == '.')
	{
		s->i++;
		if (str[s->i] == '*')
		{
			s->flag.prec = va_arg(s->argv, int);
			s->i++;
		}
		else
		{
			while (str[s->i] > 47 && str[s->i] < 58)
			{
				s->flag.prec = s->flag.prec * 10 + (str[s->i] - 48);
				s->i++;
			}
		}
	}
	return (0);
}
