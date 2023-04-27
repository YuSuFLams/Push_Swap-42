/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/27 16:09:52 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool test_integer(t_list *stack_a)
{

    while (stack_a->next && stack_a)
    {
        if (stack_a->content > stack_a->next->content)
            return (false);
        else
            stack_a = stack_a->next;
    }
    return (true);
}

int main(int ac, char **str)
{
    t_list	*stack_a;
    t_list	*stack_b;

    if (ac > 1)
    {
        test_arg(str, ac);    
        check_duplicate(str, ac);
        check_arg_min_max(str, ac);
        stack_a = ft_parser(str, ac);
        if (test_integer(stack_a) == true)
            return (0);
        if (ft_lstsize(stack_a) == 2)
            sort_2(&stack_a);
        if (ft_lstsize(stack_a) == 3)
            sort_3(&stack_a);
    }
    return (0);
}
