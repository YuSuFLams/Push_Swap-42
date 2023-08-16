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

void	set_number(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (!test_integer(*stack_a))
	{
		if (size == 2)
			sort_2(stack_a);
		else if (size == 3)
			sort_3(stack_a);
		else if (size == 4)
			sort_4(stack_a, stack_b);
		else if (size == 5)
			sort_5(stack_a, stack_b);
		else if (size > 5 && size <= 200)
			sort_x_100(stack_a, stack_b);
		else if (size > 200)
			sort_x_500(stack_a, stack_b);
	}
	free_stacks(stack_a, stack_b);
}

int	main(int ac, char **str)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**s;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	check_empty(str, ac);
	s = split_all_arg(str, ac);
	push_stack(&stack_a, s);
	get_index(stack_a);
	set_number(&stack_a, &stack_b);
	free_data(s);
	return (EXIT_SUCCESS);
}
