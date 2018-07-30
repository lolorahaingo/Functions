SRC = ft_create_elem.c ft_list_push_back.c main.c ft_read_keyboard.c ft_strdup.c
SRCS = $(addprefix srcs/, $(SRC))
NAME = read.out
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
