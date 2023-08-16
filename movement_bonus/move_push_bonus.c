/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:51:20 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 20:42:21 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_num_bonus(t_list **src, t_list **dest)
{
	t_list	*push;

	if (!ft_lstsize(*src))
		return ;
	push = *src;
	*src = (*src)->next;
	push->next = NULL;
	ft_lstadd_front(dest, push);
}

void	pa_bonus(t_list **stack_b, t_list **stack_a)
{
	push_num_bonus(stack_b, stack_a);
}

void	pb_bonus(t_list **stack_a, t_list **stack_b)
{
	push_num_bonus(stack_a, stack_b);
}
