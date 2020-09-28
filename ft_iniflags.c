 # include "libftprintf.h"

void	ft_iniflags(t_struct *s)
 {
	 s->flag.minus = -1;
	 s->flag.zero = 0;
	 s->flag.star = 0;
	 s->flag.width = 0;
	 s->flag.prec = -1;
 }