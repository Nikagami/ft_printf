# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 14:53:04 by aafounas          #+#    #+#              #
#    Updated: 2023/12/05 15:02:38 by aafounas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	libft/ft_bzero.c libft/ft_calloc.c libft/ft_memset.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_itoa.c \
		srcs/ft_printf.c srcs/ft_printchar.c srcs/ft_printnbr.c srcs/ft_printpointer.c srcs/ft_printhexa.c srcs/ft_printpercent.c \
		srcs/ft_printunsignednbr.c srcs/ft_unsigned_itoa.c \

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

LIBFT_DIR = ./libft
LIBFT = ${LIBFT_DIR}/libft.a
NAME = libftprintf.a

all:	${NAME}

${NAME}:	${LIBFT} ${OBJS}
	cp ${LIBFT} ${NAME}
	${AR} ${NAME} ${OBJS}

${LIBFT}:
	make -C ${LIBFT_DIR}

clean:
	make -C ${LIBFT_DIR} clean
	${RM} ${OBJS}

fclean:	clean
	make -C  ${LIBFT_DIR} fclean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re libft