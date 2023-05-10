/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:46:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 18:20:35 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_all_stack(t_list *stack)
{
	t_list	*data;

	while (stack)
	{
		data = stack;
		stack = stack->next;
		free(data);
	}
}

void	free_stacks(t_list **a, t_list **b)
{
	free_all_stack(*a);
	free_all_stack(*b);
}

void	free_data(char **s)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
	{
		free(*(s + i));
	}
	free(s);
}
