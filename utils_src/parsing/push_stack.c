/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:10:09 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/07 00:35:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	test_integer(t_list *stack_a)
{
	if (!ft_lstsize(stack_a))
		return (false);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (false);
		else
			stack_a = stack_a->next;
	}
	return (true);
}

void	push_stack(t_list **stack_a, char **s)
{
	int	len;

	len = set_size_arg(s);
	check_duplicate(s, len);
	check_number(s, len);
	while (len)
		ft_lstadd_front(stack_a, ft_lstnew(ft_atoi(s[--len])));
}
