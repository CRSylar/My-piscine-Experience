# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 18:57:09 by cromalde          #+#    #+#              #
#    Updated: 2020/11/05 18:57:11 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.c
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
OBJS		=	${SRCS:.c=.o}
NAME		=	ft_display_file

.c.o:
		${CC} ${CFLAGS} -c $<

all:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}


${NAME}:	${OBJS}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

.PHONY:	all clean fclean