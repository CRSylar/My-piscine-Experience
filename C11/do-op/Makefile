# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 19:38:23 by cromalde          #+#    #+#              #
#    Updated: 2020/11/06 19:38:26 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_operation.c ft_utils.c main.c
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	do-op

.c.o:
	${CC} ${CFLAGS} -c ${SRCS}

all:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${NAME}:	${OBJS}

ft_utils.o:		ft_utils.c ft_utils.h
	${CC} ${CFLAGS} -c ft_utils.c

ft_operation.o:	ft_operation.c ft_math.h
	${CC} ${CFLAGS} -c ft_operation.c

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

.PHONY:  all clean fclean