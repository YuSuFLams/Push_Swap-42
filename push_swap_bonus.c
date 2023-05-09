/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:41:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/07 00:41:57 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack_bonus(t_list **stack_a, char **s)
{
	int	len;

	len = set_size_arg(s);
	check_duplicate(s, len);
	check_number(s, len);
	int_min_max(s, len);
	while (len)
		ft_lstadd_front(stack_a, ft_lstnew(ft_atoi(s[--len])));
}

bool	test_input(t_list **src, t_list **dest, char *s)
{
	if (!ft_strcmp(s, "sa\n"))
		return(sa_bonus(src), true);
	else if (!ft_strcmp(s, "sb\n"))
		return(sb_bonus(dest), true);
	else if (!ft_strcmp(s, "ss\n"))
		return(ss_bonus(src, dest), true);
	else if (!ft_strcmp(s, "pa\n"))
		return(pa_bonus(dest, src), true);
	else if (!ft_strcmp(s, "pb\n"))
		return(pb_bonus(src, dest), true);
	else if (!ft_strcmp(s, "ra\n"))
		return(ra_bonus(src), true);
	else if (!ft_strcmp(s, "rb\n"))
		return(rb_bonus(dest), true);
	else if (!ft_strcmp(s, "rr\n"))
		return(rr_bonus(src, dest), true);
	else if (!ft_strcmp(s, "rra\n"))
		return(rra_bonus(src), true);
	else if (!ft_strcmp(s, "rrb\n"))
		return(rrb_bonus(dest), true);
	else if (!ft_strcmp(s, "rrr\n"))
		return(rrr_bonus(src, dest), true);
	else
		return (false);
	return (false);
}

void	checker(t_list **src, t_list **dest)
{
	char	*s;

	s = get_next_line(0);
	while (s)
	{
		if (!test_input(src, dest, s))
		{
			free_all_stack(*src);
			ft_error();
		}
		free(s);
		s = get_next_line(0);
	}
	free(s);
	if (test_integer(*src) && !(*dest))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int	main(int ac, char **str)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**s;

    stack_a = NULL;
    stack_b = NULL;
	if (ac == 1)
		return (0);
	s = split_all_arg(str + 1, ac - 1);
	push_stack_bonus(&stack_a, s);
	checker(&stack_a, &stack_b);
	free_all_stack(stack_a);
	free_data(s);
	return (0);
}

