# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 17:02:44 by alycgaut          #+#    #+#              #
#    Updated: 2022/07/24 20:04:21 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	main.c	\
				ft_atoi.c	\
				ft_check_argument.c 	\
				ft_putstr.c 	\
				ft_strcmp.c 	\
				ft_strlen.c 	\
				libft.c 	\
				ft_dico.c	\
				ft_compare_to_find.c 	\
				ft_strstr.c 	\
				ft_strdup.c 	\
				display_numbers.c 	\
				
OBJS = ${SRCS:.c=.o}

NAME = rush-02

CC = cc
RM = rm -f 

CFLAGS =  -Wall -Wextra -Werror

${NAME} :	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all :  ${NAME}
	
clean : 
	${RM} ${OBJS}	
fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all rush_02
