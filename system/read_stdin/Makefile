SRC = ft_create_elem.c ft_list_push_back.c main.c ft_read_stdin.c
NAME = read.out
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
