# include "libftprintf.h"

int		ft_printf(const char *str, ...)
{
	t_struct	s;

	va_start(s.argv, str);
	s.i = 0;
	s.ret = 0;
	while (str[s.i] != '\0')
	{
		if (str[s.i] == '%')
			{
				ft_iniflags(&s);
				ft_flag_recon(&s, str);
				ft_handle(&s, str);
			}
		else
		{
			write(1, &str[s.i], 1);
			s.ret++;
		}
		s.i++;
	}
	va_end(s.argv);
	return (s.ret++);
}