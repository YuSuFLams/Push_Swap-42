/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:46 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/27 15:51:39 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_list
{
	void 			*content;
	struct s_list	*next;
}	t_list;


//push_swap_fonction
bool	test_integer(t_list *stack_a);
char	*ft_strjoin_all(char **str, int ac);
t_list	*ft_parser(char **str, int ac);

//src_libft
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	freesplit(char **s, int i);
int		count(char const *s, char c);
char	**ft_split(char const *s, char c);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

//check_error
void	ft_error(void);
void    test_arg(char **s, int ac);
void	check_duplicate(char **str, int ac);
void	check_arg_min_max(char **str, int ac);

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

//move_sort
void	sort_2(t_list **src);
void	sort_3(t_list **src);


#endif