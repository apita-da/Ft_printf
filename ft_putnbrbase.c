# include "libftprintf.h"

size_t		ft_strlen(const char *str)
{
	unsigned int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
char	ft_putnbrbase(long long n, char *base, t_struct *s)
{
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		s->ret++;
	}
	if (n > (long long)ft_strlen(base))
		ft_putnbrbase(n / ft_strlen(base), base, s);
	write(1, &base[n % ft_strlen(base)], 1);
	s->ret++;
	return (0);
}