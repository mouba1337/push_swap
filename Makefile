NAME = push_swap
CC = cc -g
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c errors.c args.c push.c rev_rotate.c rotate.c sort.c \
	sorting.c split.c swap.c tinysort.c utils.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


clean: 
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
