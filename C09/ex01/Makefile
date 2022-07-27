# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 10:32:55 by alycgaut          #+#    #+#              #
#    Updated: 2022/07/27 18:24:10 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_putstr.c		\
		ft_putchar.c		\
		ft_strcmp.c		\
		ft_strlen.c		\
		ft_swap.c		\

OBJS = $(addprefixe srcs/, ${SRCS:.c=.o})

NAME = libft.a

HEADERS = includes/

.c.o : ${OBJS}
		gcc	-Wall -Wextra -Werror -I -c ${HEADERS} ${OBJS}

${NAME} :	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all :	${NAME}

clean :	
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :	fclean all
