SRCS	= ${addprefix ${PRE}, ${SRC}}
PRE		= ./srcs/
SRC		= btree_create_node.c btree_apply_prefix.c btree_apply_infix.c btree_apply_suffix.c btree_insert_data.c btree_search_item.c btree_level_count.c btree_apply_by_level.c
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
