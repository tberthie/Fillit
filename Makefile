SRCS = main.c \
	   parse.c \
	   solve.c \
	   shapes.c \
	   remove.c \
	   print.c \
	   utl.c

OBJS = $(SRCS:.c=.o)
NAME = fillit

all: $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror $^ -o $@

%.o: srcs/%.c
	gcc -Wall -Wextra -Werror -Iincs -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
