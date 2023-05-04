/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/04 22:01:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **str)
{
    t_list *stack_a;
    // t_list *stack_b;
    char **s;

    if (ac > 1)
    {
        int_min_max(str + 1, ac - 1);
        s = split_all_arg(str + 1, ac - 1);
        push_stack(&stack_a, s);
    }
    return (0);
}
