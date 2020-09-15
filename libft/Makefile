# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apita-da <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 17:40:04 by apita-da          #+#    #+#              #
#    Updated: 2019/11/29 17:28:16 by apita-da         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Libft.a

SRC = ft_isalpha.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_strlen.c\
	  ft_isalnum.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c\
	  ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c\
	  ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strdup.c\
	  ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	  ft_substr.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_split.c ft_wordcount.c\
	  ft_itoa.c

SRC1 = ft_strcpy.c ft_intlen.c

OBJS = ${SRC:.c=.o}
OBJS1 = ${SRC1:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c -I.

all:
	${CC} ${CFLAGS} ${SRC} ${SRC1}
	ar rc ${NAME} ${OBJS} ${OBJS1}
	ranlib ${NAME}

clean:
	rm -f ${OBJS} ${OBJS1}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
