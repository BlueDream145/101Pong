##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	src/instance.c \
		src/utils.c \
		src/maths.c \
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):
	gcc $(SRC) -Wall -Wextra -lm -I include -o $(NAME) -g

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
