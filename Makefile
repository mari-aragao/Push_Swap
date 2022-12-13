NAME	= push_swap

SRCS	=	\
		./srcs/main.c \
		./srcs/utils.c \
		./srcs/checks.c \
		./srcs/lst_new.c \
		./srcs/lst_size.c \
		./srcs/lst_clear.c \
		./srcs/lst_last.c \
		./srcs/lst_add_back.c \
		./srcs/lst_add_front.c \
		./srcs/swap.c \
		./srcs/rotate.c \
		./srcs/reverse_rotate.c\
		./srcs/push.c \
		./srcs/sort_three.c \
		./srcs/sort_four.c \
		./srcs/sort_five.c \
		./srcs/radix.c \
		./srcs/print_functions.c \
		./srcs/index.c

INCLUDES	= ./includes

CC	= -Wall -Wextra -Werror -g

${NAME}:	${SRCS}	
	gcc ${CC} -I ${INCLUDES} ${SRCS} -o ${NAME}

all:	${NAME}

clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -rf ${NAME}
	rm -rf *.dSYM

re:	fclean all

.PHONY:	re fclean clean all
