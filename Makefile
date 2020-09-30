# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/30 17:38:30 by apita-da          #+#    #+#              #
#    Updated: 2020/09/30 17:38:30 by apita-da         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_handle.c\
		ft_put_c.c ft_put_str.c ft_putstr.c ft_put_dig.c\
		ft_putnbrbase.c ft_iniflags.c ft_flag_recon.c\
		ft_put_dig_u.c ft_put_dig_x.c ft_put_dig_XX.c\
		ft_put_p.c ft_put_perc.c
		
OBJS = 	ft_printf.o\
		ft_handle.o\
		ft_put_c.o\
		ft_put_str.o\
		ft_putstr.o\
		ft_put_dig.o\
		ft_putnbrbase.o\
		ft_iniflags.o\
		ft_flag_recon.o\
		ft_put_dig_u.o\
		ft_put_dig_x.o\
		ft_put_dig_XX.o\
		ft_put_p.o\
		ft_put_perc.o


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