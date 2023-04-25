NAME = push_swap

CC = cc

RM = rm -rf

CFLAGS	= -Wall -Wextra -Werror

HEADER = push_swap.h 

SRCS = 

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)  

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM)  $(NAME)

re: fclean all

.PHONY: all clean fclean re