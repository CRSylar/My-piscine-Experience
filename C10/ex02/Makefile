# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 19:50:38 by cromalde          #+#    #+#              #
#    Updated: 2020/11/08 19:50:42 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c utils.c
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAG	=	-Wall -Wextra -Werror
NAME	=	ft_tail

.c.o:	
	${CC} ${CFLAG} -c $<

all:	${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAG} -o ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re