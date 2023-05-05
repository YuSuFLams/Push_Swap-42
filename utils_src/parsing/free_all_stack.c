/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:46:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/05 21:20:19 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_all_stack(t_list *stack)
{
	t_list *data;

	while (stack)
	{
		data = stack;
		stack = stack->next;
		free(data);
	}
}