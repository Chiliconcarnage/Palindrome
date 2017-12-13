##
## Makefile for Makefile in /home/oem/home/SBMLparser
## 
## Made by maxence.lauque
## Login   <lauque_m@epitech.net>
## 
## Started on  Mon Jun 13 10:21:35 2016 maxence.lauque
## Last update Sat Jun 18 12:19:23 2016 maxence.lauque
##

CC = cc

NAME = palindrome

RM = rm -rf

SRC = src/main.c							\
 src/error_gestion/error_gestion.c					\
 src/error_gestion/error_gestion_iminmax.c				\
 src/display_help/print_help.c						\
 src/tools/tools.c							\
 src/algo/algo_n.c							\
 src/algo/algo_p.c

LIB = lib/my/function.c							\
 lib/my/my_strcmp.c
OBJ = $(SRC:.c=.o) $(LIB:.c=.o)

INCLUDE = -I./include -I./lib/my/include

FLAGS = -W -Wall -Wextra -Werror -ansi -pedantic -g

CFLAGS = $(INCLUDE) $(FLAGS)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean all
