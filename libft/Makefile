SOURCEFILES	= $(wildcard *.c)
OBJECTS	= $(SOURCEFILES:.c=.o)

NAME	= libft.a

COMPILER		= cc

RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

.PHONY: all, clean, fclean, re

all: $(NAME)

${NAME} : ${OBJECTS}
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o : %.c
	${COMPILER} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all
