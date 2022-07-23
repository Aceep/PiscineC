# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 17:02:44 by alycgaut          #+#    #+#              #
#    Updated: 2022/07/23 21:13:58 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	main.c	\
				ft_atoi.c	\
				ft_check_argument.c 	\
				ft_putstr.c 	\
				ft_strcmp.c 	\
				ft_strlen.c 	\
				libft.c 	\
				ft_parsing_dico.c	\
			
				
OBJS = ${SRCS:.c=.o}

NAME = rush-02

CC = cc
RM = rm -f 

CFLAGS =  -Wall -Wextra -Werror 

${NAME} :	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all : 
		${NAME}
		
fclean :
			${RM} ${NAME} ${OBJS}