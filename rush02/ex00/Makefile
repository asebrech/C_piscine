CC=gcc 
CFLAGS=-Wall -Werror -Wextra
SRC= srcs/char_returns.c srcs/fill_str.c srcs/norminette.c srcs/rush_t01.c srcs/structure.h	srcs/utils.c
OBJ= $(SRC:.c=.o)
HEADER=includes
EXEC=Name

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -I$(HEADER) -C $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(EXEC)
re: fclean all
