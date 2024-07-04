CC = cc -Wall -Wextra -Werror -g3

FLAGS = -Wall -Wextra -Werror -g3

NAME = pushswap

LIBFT = ./libft/libft.a

SRC = \
convert.c\
digit.c\
find.c\
main.c\
opti_move.c\
perfect_radix_sort.c\
push_swap_for.c\
push.c\
reverse_rotate.c\
rotate.c\
sorting.c\
swap.c\
utils.c\
main_utils.c\
long_atoi.c\

all: $(NAME)

OBJS = $(SRC:.c=.o)

$(NAME) : $(LIBFT) $(OBJS) 
	ar -rcs $(NAME) $(OBJS) 
	$(CC) $(FLAGS) $(NAME) -o push_swap

$(LIBFT):
	make -C libft
	cp $(LIBFT) $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f push_swap
	rm -f a.out
	rm -f $(LIBFT)
	rm -f ./libft/*/*/*.o
	rm -f ./libft/*/*.o

re: fclean all

.PHONY: all libft clean fclean re