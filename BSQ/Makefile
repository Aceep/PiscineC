# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 11:23:56 by alycgaut          #+#    #+#              #
#    Updated: 2022/07/25 12:21:32 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c \

OBJS = ${SRCS:.c=.o}

HEADERS = bsq.h 

NAME = bsq

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

RM = rm -f 

all :		${NAME}

${NAME} :	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean :
			${RM} ${OBJS}

fclean : 	clean
			${RM} ${NAME}

re : 		fclean all