SRCS = ft_printf.c ft_handle.c\
		ft_put_c.c ft_put_str.c ft_putstr.c ft_put_dig.c\
		ft_putnbrbase.c ft_iniflags.c ft_flag_recon.c\
		ft_strlenprint.c
		
OBJS = 	ft_printf.o\
		ft_handle.o\
		ft_put_c.o\
		ft_put_str.o\
		ft_putstr.o\
		ft_put_dig.o\
		ft_putnbrbase.o\
		ft_iniflags.o\
		ft_flag_recon.o\
		ft_strlenprint.o\

CFLAGS = -Wall -Wextra -Werror -g
ARFLAGS = -crs
all: install

install: 
		gcc $(CFLAGS) main1.c $(SRCS)
libreria:
		gcc $(CFLAGS) -c $(SRCS)
		ar $(ARFLAGS) libftprintf.a $(OBJS)
		ranlib libftprintf.a
clean:
		rm $(OBJS)
fclean: clean
		rm libftprintf.a
re: clean fclean