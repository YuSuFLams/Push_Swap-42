NAME = push_swap

C_BLUE    = \033[0;34m
C_GREEN   = \033[0;32m
C_RESET = \033[0m

CC = cc

RM = rm -rf

CFLAGS	= -Wall -Wextra -Werror

HEADER = push_swap.h 

SRCS = movement/move_push.c movement/move_reverse.c movement/move_rotate.c movement/move_swap.c \
	utils_src/func_lst/ft_lstadd_front.c utils_src/func_lst/ft_lstlast.c \
	utils_src/func_lst/ft_lstsize.c utils_src/func_lst/ft_lstnew.c \
	utils_src/func_str/ft_putstr.c utils_src/func_str/ft_split.c utils_src/func_str/ft_strlen.c \
	utils_src/func_str/ft_substr.c  utils_src/func_str/ft_strjoin.c utils_src/func_str/ft_strdup.c \
	utils_src/func_str/ft_strcmp.c utils_src/func_str/ft_isdigit.c utils_src/func_str/ft_atoi.c \
	utils_src/parsing/check_duplicate.c utils_src/parsing/ft_error.c utils_src/parsing/check_number.c \
	utils_src/parsing/split_all_arg.c utils_src/parsing/set_size_arg.c utils_src/parsing/push_stack.c \
	utils_src/parsing/free_all_stack.c \
	sort_number/sort_2_num.c sort_number/sort_3_num.c sort_number/sort_4_num.c sort_number/sort_5_num.c\
	push_swap.c 
 
OBJS = ${SRCS:.c=.o}

all: $(NAME)
	@printf "$(C_BLUE)    - Compilation finished!....$(C_RESET)\n"

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)  

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM)  $(NAME)
	@printf "$(C_GREEN)    - Removed finished!....$(C_RESET)\n"

re: fclean all

.PHONY: all clean fclean re