NAME	= push_swap

SRCS	=	\
		main.c \
		./utils/utils.c \
		./utils/checks.c \
		./linked_list/lst_new.c \
		./linked_list/lst_size.c \
		./linked_list/lst_clear.c \
		./linked_list/lst_last.c \
		./linked_list/lst_add_back.c \
		./linked_list/lst_add_front.c \
		./commands/swap.c \
		./commands/rotate.c \
		./commands/reverse_rotate.c\
		./commands/push.c \
		./algorithms/sort_three.c \
		./algorithms/sort_four.c \
		./algorithms/sort_five.c \
		./algorithms/radix.c \
		./utils/print_functions.c \
		./utils/index.c

OBJS	= ${SRCS:.c=.o}

CC	= -Wall -Wextra -Werror

.c.o:
	cc ${CC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}	
	cc ${CC} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -rf ${NAME}
	rm -rf *.dSYM

re:	fclean all

.PHONY:	re fclean clean all
