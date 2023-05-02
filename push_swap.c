/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/02 19:54:10 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool test_integer(t_list *stack_a)
{
    while (stack_a->next)
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
    // t_list	*stack_a;
    // t_list	*stack_b;

    if (ac > 1)
    {
        check_duplicate(str);
        check_arg_min_max(str);
        // stack_a = NULL;
        // stack_a = ft_perser(str);
        // if (!test_integer(stack_a))
        // {
        //     if (ft_lstsize(stack_a) == 2)
        //         sort_2(&stack_a);
        //     else if (ft_lstsize(stack_a) == 3)
        //         sort_3(&stack_a);
            // else if (ft_lstsize(stack_a) <= 5)
            //     sort_4_5(&stack_a, &stack_b);
            // else if (ft_lstsize(stack_a) > 5)
            //     sort_x(&stack_a);
        // }
    }
    return (0);
}
