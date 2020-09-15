# include "libftprintf.h"

void	ft_handle(t_struct *s, const char *str)
{
	if (str[s->i] == 'c')
		ft_put_c(s);
	if (str[s->i] == 's')
		ft_put_str(s);
	if (str[s->i] == 'd' || str[s->i] == 'i')
		ft_put_dig(s);

}