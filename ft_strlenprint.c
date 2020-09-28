# include "libftprintf.h"

int		ft_strlenprint(const char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}