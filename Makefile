##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

NAME	=	matchstick

LIB	=	-L./lib/printf -lmy

MAKE	=	make -C

SRC	=	src/main.c			\
		src/init_struct.c		\
		src/creat_map.c			\
		src/printf_array.c		\
		src/game.c			\
		src/get_request.c		\
		src/get_next_line.c		\
		src/delet_pip.c			\
		src/ia.c			\
		src/scan_map.c			\
		src/action.c			\
		src/my/my_str_isnum.c		\
		src/my/my_calloc.c		\
		src/my/my_strlen.c		\
		src/my/my_atoi.c		\

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -W -Wextra -I include/

all:	$(NAME)

 $(NAME):	$(OBJ)
	$(MAKE) lib/printf
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)

clean:
	$(MAKE) lib/printf clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) lib/printf fclean
	rm $(NAME)

re: clean all

.PHONY: all re clean fclean
