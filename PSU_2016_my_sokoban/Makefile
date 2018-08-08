##
## Makefile for Makefile in /home/jeremy.elkaim/PSU_2016_my_ls
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Mon Nov 21 14:00:06 2016 jeremy elkaim
## Last update Tue Dec 20 15:12:55 2016 jeremy elkaim
##

NAME    = my_sokoban

SRC    = my_sokoban.c		\
	 function.c		\
	 basic.c		\
	 win.c			\

OBJ    = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	gcc $(OBJ) -o $(NAME) -Iinclude -lncurses

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
