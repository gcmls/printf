# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcosta-m <gcosta-m@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 16:07:05 by gcosta-m          #+#    #+#              #
#    Updated: 2021/03/05 16:07:05 by gcosta-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(wildcard ./srcs/*.c)

OBJS	=	${SRCS:.c=.o}

INCDIR  =	includes

NAME	=	libftprintf.a

CC		=	gcc

ARRC	=	ar rcs

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror # -fsanitize=address

.c.o:
			${CC} -g ${CFLAGS} -c $^ -o ${<:.c=.o} -I${INCDIR}

$(NAME):	${OBJS}
			${ARRC} ${NAME} ${OBJS}

all:		${NAME}

bonus:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
