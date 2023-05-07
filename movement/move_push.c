/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:51:20 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/05 19:34:00 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_num(t_list **src, t_list **dest)
{
	t_list *push;

	if (!ft_lstsize(*src))
		return ;
	push = *src;
	*src = (*src)->next;
	push->next = NULL;
	ft_lstadd_front(dest, push);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push_num(stack_b, stack_a);
	ft_putstr("pa\n");   
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push_num(stack_a, stack_b);
	ft_putstr("pb\n");   
}
