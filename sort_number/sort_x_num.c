/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_x_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 01:32:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/08/16 17:00:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_stack_b(t_list **src, t_list **dest, int chunk, int move)
{
	int	i;

	i = 0;
	while (*src && i < chunk)
	{
		if ((*src)->pos <= move)
		{
			if ((*src)->pos < move - (chunk / 2))
			{
				pb(src, dest);
				rb(dest);
			}
			else
				pb(src, dest);
			i++;
		}
		else
			ra(src);
	}
}

void	sort_x_100(t_list **src, t_list **dest)
{
	int	move;
	int	chunk;

	chunk = ft_lstsize(*src) / 5;
	move = chunk;
	while (ft_lstsize(*src))
	{
		push_to_stack_b(src, dest, chunk, move);
		move += chunk;
	}
	push_to_stack_a(dest, src);
}

void	sort_x_500(t_list **src, t_list **dest)
{
	int	move;
	int	chunk;

	chunk = ft_lstsize(*src) / 9;
	move = chunk;
	while (ft_lstsize(*src))
	{
		push_to_stack_b(src, dest, chunk, move);
		move += chunk;
	}
	push_to_a(dest, src);
}
