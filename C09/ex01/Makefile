CC=gcc 
CFLAGS=-Wall -Werror -Wextra
SRC= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ= $(SRC:.c=.o)
HEADER=includes
EXEC=libft.a

all: $(EXEC)

$(EXEC): lib
	ranlib $@

lib: $(OBJ)
	ar rc $(EXEC) $^

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

.PHONY: all lib clean fclean re

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(EXEC)
re: fclean all
