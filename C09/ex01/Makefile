# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 11:08:32 by cromalde          #+#    #+#              #
#    Updated: 2020/11/05 18:23:02 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	rm -f ${OBJS}

flcean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY:		all clean fclean re
