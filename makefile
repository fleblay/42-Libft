#TO-DO : replace wildcard with filenames ????
SRCS = $(wildcard ft_*.c)
OBJS = ${SRCS:.c=.o}
NAME = libft.a

CC = gcc
CFLAGS=-Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
	ar -rc ${NAME} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -c $< 

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re	: fclean all
