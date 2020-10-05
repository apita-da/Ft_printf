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

NAME = libftprintf.a

SRCS =	ft_printf.c ft_handle.c\
		ft_put_c.c ft_put_str.c ft_putstr.c ft_put_dig.c\
		ft_putnbrbase.c ft_iniflags.c ft_flag_recon.c\
		ft_put_dig_u.c ft_put_dig_x.c ft_put_dig_x_mayus.c\
		ft_put_p.c ft_put_perc.c
		
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all:  
	gcc -c $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re