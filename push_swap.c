/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:15:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 19:48:02 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **str)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**s;

	if (ac > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		int_min_max(str + 1, ac - 1);
		s = split_all_arg(str + 1, ac - 1);
		push_stack(&stack_a, s);
		if (ft_lstsize(stack_a) == 2)
			sort_2(&stack_a);
		else if (ft_lstsize(stack_a) == 3)
			sort_3(&stack_a);
		else if (ft_lstsize(stack_a) == 4)
			sort_4(&stack_a, &stack_b);
		else if (ft_lstsize(stack_a) == 5)
			sort_5(&stack_a, &stack_b);
		free_all_stack(stack_a);
		free_data(s);
	}
	return (0);
}
