/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:41:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 20:39:49 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    test_input(t_list **src, t_list **dest, char *s)
{
    if (!ft_strcmp(s, "sa\n"))
        sa_bonus(src);
    else if (!ft_strcmp(s, "sb\n"))
        sb_bonus(dest);
    else if (!ft_strcmp(s, "ss\n"))
        ss_bonus(src, dest);
    else if (!ft_strcmp(s, "pa\n"))
        pa_bonus(dest, src);
    else if (!ft_strcmp(s, "pb\n"))
        pb_bonus(src, dest);
    else if (!ft_strcmp(s, "ra\n"))
        ra_bonus(src);
    else if (!ft_strcmp(s, "rb\n"))
        rb_bonus(dest);
    else if (!ft_strcmp(s, "rr\n"))
        rr_bonus(src, dest);
    else if (!ft_strcmp(s, "rra\n"))
        rra_bonus(src);
    else if (!ft_strcmp(s, "rrb\n"))
        rrb_bonus(dest);
    else if (!ft_strcmp(s, "rrr\n"))
        rrr_bonus(src, dest);
    else
        ft_error();
}

void checker(t_list **src, t_list **dest)
{
    char *s;

    s = get_next_line(0);
    while (s)
    {
        test_input(src, dest, s);
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
	if (ac > 1)
	{
		int_min_max(str + 1, ac - 1);
		s = split_all_arg(str + 1, ac - 1);
		push_stack(&stack_a, s);
        checker(&stack_a, &stack_b);
		free_all_stack(stack_a);
		free_data(s);
	}
	return (0);
}

