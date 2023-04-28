NAME = push_swap

CC = cc

RM = rm -rf

CFLAGS	= -Wall -Wextra -Werror

HEADER = push_swap.h 

SRCS = movement/move_push.c movement/move_reverse.c movement/move_rotate.c movement/move_swap.c \
	sort_number/sort_2_num.c sort_number/sort_3_num.c sort_number/sort_5_num.c \
	utils_src/func_lst/ft_lstadd_back.c utils_src/func_lst/ft_lstadd_front.c utils_src/func_lst/ft_lstlast.c \
	utils_src/func_lst/ft_lstsize.c utils_src/func_lst/ft_lstnew.c \
	utils_src/func_str/ft_putstr.c utils_src/func_str/ft_split.c utils_src/func_str/ft_strlen.c \
	utils_src/func_str/ft_substr.c utils_src/func_str/sort_all_arg.c utils_src/func_str/ft_strjoin.c \
	utils_src/func_str/ft_strcmp.c utils_src/func_str/ft_atoi.c \
	utils_src/parsing/check_all_arg.c utils_src/parsing/ft_perser.c \
	push_swap.c 
 
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