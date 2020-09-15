SRCS = ft_printf.c ft_handle.c\
		ft_put_c.c ft_put_str.c ft_put_dig.c\
		ft_putnbrbase.c ft_iniflags.c ft_flag_recon.c\

LIBFT = libft/Libft.a
CFLAGS = -Wall -Wextra -Werror
install: 
		gcc $(CFLAGS) main1.c $(SRCS) $(LIBFT)