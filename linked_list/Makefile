SRCS	= ${addprefix ${PRE}, ${SRC}}
PRE		= ./srcs/
SRC		= ft_create_elem.c ft_list_push_front.c ft_list_size.c ft_list_last.c ft_list_push_back.c
OBJS	= ${SRCS:.c=.o}
HEAD	= ./includes/
NAME	= a.out
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${GCC} ${CFLAGS} main.c ${OBJS} -o ${NAME}

.c.o:
	${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
