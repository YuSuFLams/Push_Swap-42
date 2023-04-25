/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/25 16:28:00 by ylamsiah         ###   ########.fr       */
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
    if (ac > 1)
    {
        if (!test_arg(str, ac))
            ft_error();
    }
    return (0);
}
