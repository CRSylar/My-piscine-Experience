# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 20:07:23 by cromalde          #+#    #+#              #
#    Updated: 2020/11/05 20:07:34 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c
OBJS	=	${SRCS:.c=.o}
CC		= 	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	ft_cat

.c.o:
	${CC} ${CFLAGS} -c $<

all:	${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}


clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}