/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_x_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 01:32:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/11 20:59:28 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_stack_b(t_list **src, t_list **dest, int chunk, int move)
{
	int i;
	
	i = 0;
	while (*src && i < chunk)
	{
		if ((*src)->pos <= move)
		{
			if ((*src)->pos > move - (chunk / 2))
				pb(src, dest);
			else
			{
				pb(src, dest);
				rb(dest);
			}
			i++;
		}
		else
			ra(src);
	}
}

void push_to_stack_a(t_list **dest, t_list **src)
{
	int	pos_max;
	// int i;

	pos_max = get_pmax_num(*dest);
	while (ft_lstsize(*dest) > 2)
	{
		if (pos_max == 0)
			pa(dest, src);
		else if (pos_max <= ft_lstsize(*dest) / 2)
			rb(dest);
		else if (pos_max > ft_lstsize(*dest) / 2)
			rrb(dest);
		pos_max = get_pmax_num(*dest);
	}
	sort_2(dest);
	rb(dest);
	while (*(dest))
		pa(dest, src);
}

void	sort_x(t_list **src, t_list **dest)
{
	int	move;
    int chunk;

	if (ft_lstsize(*src) > 5 && ft_lstsize(*src) <= 100)
		chunk = ft_lstsize(*src) / 5;
	if (ft_lstsize(*src) > 100)
		chunk = ft_lstsize(*src) / 9;
	move = chunk;
	while (ft_lstsize(*src))
    {
		push_to_stack_b(src, dest, chunk, move);
		move += chunk;
	}
	push_to_stack_a(dest, src);
}
