# include "libftprintf.h"

char	ft_putnbrbase(long long n, char *base, t_struct *s)
{
	if (n < 0)
	{
		n*=-1;
		write (1, "-", 1);
	}
	if (n > (long long)ft_strlen(base))
		ft_putnbrbase(n / ft_strlen(base), base, s);
	write(1, &base[n % ft_strlen(base)], 1);
	s->ret++;
	return (0);
}