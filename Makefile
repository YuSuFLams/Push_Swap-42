NAME_M = push_swap
NAME_B = checker_bonus

C_BLUE    = \033[0;34m
C_GREEN   = \033[0;32m
C_RESET = \033[0m

CC = cc

RM = rm -rf

CFLAGS	= -Wall -Wextra -Werror

HEADER = push_swap.h 

M_SRCS = movement/move_push.c movement/move_reverse.c movement/move_rotate.c movement/move_swap.c \
	utils_src/func_lst/ft_lstadd_front.c utils_src/func_lst/ft_lstlast.c \
	utils_src/func_lst/ft_lstsize.c utils_src/func_lst/ft_lstnew.c \
	utils_src/func_str/ft_putstr.c utils_src/func_str/ft_split.c utils_src/func_str/ft_strlen.c \
	utils_src/func_str/ft_substr.c utils_src/func_str/ft_strjoin.c utils_src/func_str/ft_strdup.c \
	utils_src/func_str/ft_strcmp.c utils_src/func_str/ft_isdigit.c utils_src/func_str/ft_atoi.c \
	utils_src/parsing/check_duplicate.c utils_src/parsing/ft_error.c utils_src/parsing/check_number.c \
	utils_src/parsing/split_all_arg.c utils_src/parsing/set_size_arg.c utils_src/parsing/push_stack.c \
	utils_src/parsing/free_all_stack.c \
	sort_number/sort_2_num.c sort_number/sort_3_num.c sort_number/sort_4_num.c sort_number/sort_5_num.c\
	sort_number/sort_x_num.c \
	push_swap.c get_small_num.c
 
B_SRCS = movement_bonus/move_push_bonus.c movement_bonus/move_reverse_bonus.c \
	movement_bonus/move_rotate_bonus.c movement_bonus/move_swap_bonus.c \
	utils_src/get_next_line/get_next_line.c utils_src/get_next_line/get_next_line_utils.c \
	utils_src/func_lst/ft_lstadd_front.c utils_src/func_lst/ft_lstlast.c \
	utils_src/func_lst/ft_lstsize.c utils_src/func_lst/ft_lstnew.c \
	utils_src/func_str/ft_putstr.c utils_src/func_str/ft_split.c utils_src/func_str/ft_strlen.c \
	utils_src/func_str/ft_substr.c utils_src/func_str/ft_strjoin.c utils_src/func_str/ft_strdup.c \
	utils_src/func_str/ft_strcmp.c utils_src/func_str/ft_isdigit.c utils_src/func_str/ft_atoi.c \
	utils_src/parsing/check_duplicate.c utils_src/parsing/ft_error.c utils_src/parsing/check_number.c \
	utils_src/parsing/split_all_arg.c utils_src/parsing/set_size_arg.c utils_src/parsing/push_stack.c \
	utils_src/parsing/free_all_stack.c \
	push_swap_bonus.c 

M_OBJS = ${M_SRCS:.c=.o}
B_OBJS = ${B_SRCS:.c=.o}

all: $(NAME_M)

$(NAME_M): $(M_OBJS) $(HEADER)
	@$(CC) $(CFLAGS)  $(M_OBJS) -o $(NAME_M)  
	@printf "$(C_BLUE)    - Compilation Mandatory finished!....$(C_RESET)\n"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME_B)

$(NAME_B): $(B_OBJS) $(HEADER)
	@$(CC) $(CFLAGS)  $(B_OBJS) -o $(NAME_B)  
	@printf "$(C_BLUE)    - Compilation Bonus finished!....$(C_RESET)\n"

clean:
	@$(RM) $(M_OBJS) $(B_OBJS)
	@printf "$(C_GREEN)    - Removed Object File finished!....$(C_RESET)\n"

fclean: clean
	@$(RM)  $(NAME_M) $(NAME_B)
	@printf "$(C_GREEN)    - Removed finished!....$(C_RESET)\n"

re: fclean all

re_b: fclean bonus

.PHONY: all clean fclean re bonus