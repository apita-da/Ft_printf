# include "libftprintf.h"

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

int		ft_count_num(long int num)
{
    int i;
    
    i = 0;
	if (num == 0)
		i = 1;
    while (num != 0)
    {
        num = num / 10;
        i++;
    }
    return (i);
}