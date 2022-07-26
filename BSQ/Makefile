# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 11:23:56 by alycgaut          #+#    #+#              #
#    Updated: 2022/07/26 17:36:53 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	bsq.c \
		ft_check_line.c 	\
		ft_fill_map.c 	\
		ft_gen_map.c 	\
		ft_mstrcat.c 	\
		ft_open_file.c 	\
		ft_print_map.c 	\
		ft_putchar.c 	\
		ft_solve.c 	\
		ft_strcpy.c 	\

OBJS = ${SRCS:.c=.o}

HEADERS = bsq.h 

NAME = bsq

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -g3

RM = rm -f 

all :		${NAME}

${NAME} :	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean :
			${RM} ${OBJS}

fclean : 	clean
			${RM} ${NAME}

re : 		fclean all