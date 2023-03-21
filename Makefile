##
## EPITECH PROJECT, 2022
## Rémy - Canal
## File description:
## Makefile
##

SRC      =  src/main.c \
            src/create_tab.c \
            src/read_map.c \
            src/my_calculs.c \
            src/create_tab_int.c \
            src/find_square.c \
            src/print_square.c \
            src/my_putchar.c \
            src/my_putstr.c \
            src/my_strlen.c \
            src/my_atoi.c \
            src/generator.c \
            src/my_errors.c

CFLAGS   =  -Wall -Wextra -g3
CC       =  gcc
NAME     =  bsq

SRC_OBJ      = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(CC) $(SRC_OBJ) -o $(NAME)

$(SRC_OBJ): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run:
    ./bsq
