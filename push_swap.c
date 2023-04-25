/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/25 14:05:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool test_integer(t_list *stack_a)
{

    while (stack_a->next && stack_a)
    {
        if (stack_a->next->content > stack_a->content)
            return (false);
        else
            stack_a = stack_a->next;
    }
    return (true);
}

// int main(int ac, char **str)
// {
//     if (ac > 1)
//     {
        
//     }
//     return (0);
// }

int main(int ac, char **str)
{
    (void)ac;
    char **s;
	int i;

	s = ft_split(str[1], ' ');
	i = 0;
	while (i < count(str[1], ' '))
		printf("%s\n", s[i++]);
}