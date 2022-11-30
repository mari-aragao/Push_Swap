NAME	= push_swap

SRCS	=	\
		main.c \
		error.c \
		lst_add_back.c \
		lst_add_front.c \
		lst_last.c \
		lst_new.c \
		utils.c \

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
