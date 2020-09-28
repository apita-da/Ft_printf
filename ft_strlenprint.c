# include "libftprintf.h"

int		ft_strlenprint(const char *str, int prec, t_struct *s)
{
	int cont;

	cont = 0;
	if(!s->flag.prec)
	{
		while (str[cont] != '\0')
			cont++;
		return (cont);
	}
	else
	{
		while (str[cont] != '\0' && (prec--) != 0)
			cont++;
		return (cont);
	}
}