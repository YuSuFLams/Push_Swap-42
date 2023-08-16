/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:46 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/07 00:35:59 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				pos;
	struct s_list	*next;
}				t_list;

//src_get_next_line

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		get_strlen(char *s);
char	*get_strchr(char *s, int c);
char	*get_strjoin(char *s1, char *s2);
char	*set_read_line(char *line);
char	*read_line(int fd, char *line);
char	*set_next_line(char *line);
char	*get_next_line(int fd);

//src_libft
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_isdigit(int c);
char	*ft_strdup(const char *s);
void	freesplit(char **s, int i);
int		count(char const *s, char c);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);

//push_swap_fonction
void	check_duplicate(char **s, int ac);
int		is_num(char *s);
void	check_number(char **str, int ac);
char	*strjoin_all_arg(char **str, int ac);
char	**split_all_arg(char **str, int ac);
int		set_size_arg(char **s);
void	push_stack(t_list **stack_a, char **s);
bool	test_integer(t_list *stack_a);
int		get_pmin_num(t_list *list);
int		get_pmax_num(t_list *list);
int		_isdigit(char *s);
void	check_empty(char **s, int len);

//check_error
void	free_stacks(t_list **a, t_list **b);
void	free_all_stack(t_list *stack);
void	free_data(char **s);
void	ft_error(void);

//movement_push
void	push_num(t_list **src, t_list **dest);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);

//movement_swap
void	ss(t_list **src, t_list **dest);
void	sa(t_list **src);
void	sb(t_list **dest);
void	swap_num(t_list **lst);

//movement_rotate
void	rr(t_list **src, t_list **dest);
void	ra(t_list **src);
void	rb(t_list **dest);
void	rotate_num(t_list **lst);

//movement_reverse
void	rrr(t_list **src, t_list **dest);
void	rrb(t_list **dest);
void	rra(t_list **src);
void	reverse_num(t_list **lst);

//Utils_sort
void	get_index(t_list *stack);
void	push_to_stack_b(t_list **src, t_list **dest, int chunk, int move);
void	push_to_stack_a(t_list **dest, t_list **src);

//move_sort
void	sort_2(t_list **src);
void	sort_3(t_list **src);
void	sort_4(t_list **src, t_list **dest);
void	sort_5(t_list **src, t_list **dest);
void	sort_x_100(t_list **src, t_list **dest);
void	sort_x_500(t_list **src, t_list **dest);
void	set_number(t_list **stack_a, t_list **stack_b);

//Bonus
bool	test_input(t_list **src, t_list **dest, char *s);
void	checker(t_list **src, t_list **dest);

//movement_push_bonus
void	push_num_bonus(t_list **src, t_list **dest);
void	pa_bonus(t_list **stack_a, t_list **stack_b);
void	pb_bonus(t_list **stack_b, t_list **stack_a);

//movement_swap_bonus
void	ss_bonus(t_list **src, t_list **dest);
void	sa_bonus(t_list **src);
void	sb_bonus(t_list **dest);
void	swap_num_bonus(t_list **lst);

//movement_rotate_bonus
void	rr_bonus(t_list **src, t_list **dest);
void	ra_bonus(t_list **src);
void	rb_bonus(t_list **dest);
void	rotate_num_bonus(t_list **lst);

//movement_reverse_bonus
void	rrr_bonus(t_list **src, t_list **dest);
void	rrb_bonus(t_list **dest);
void	rra_bonus(t_list **src);
void	reverse_num_bonus(t_list **lst);

//utils_sort_500
void	push_to_a(t_list **dest, t_list **src);
void	move_to_top(t_list **dest, t_list **src, int pos);
int		get_op_num(t_list *dest, int pos);
int		get_pos_num(t_list *dest, int size);

#endif