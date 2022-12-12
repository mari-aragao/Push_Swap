NAME	= push_swap

SRCS	=	\
		main.c \
		utils.c \
		checks.c \
		lst_new.c \
		lst_size.c \
		lst_clear.c \
		lst_last.c \
		lst_add_back.c \
		lst_add_front.c \
		swap.c \
		rotate.c \
		reverse_rotate.c\
		push.c \
		sort_three.c \
		sort_five.c \
		radix.c \
		print_functions.c \
		index.c

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
