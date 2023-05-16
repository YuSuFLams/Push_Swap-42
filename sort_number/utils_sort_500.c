/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_500.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 00:11:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/16 23:13:41 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_pos_num(t_list *dest, int size)
{
	int	pos;

	pos = -1;
	while (dest)
	{
		++pos;
		if (dest->pos == size)
			break ;
		dest = dest->next;
	}
	return (pos);
}

int	get_op_num(t_list *dest, int pos)
{
	int	size;
	int	ind;

	size = ft_lstsize(dest);
	ind = get_pos_num(dest, pos);
	if (ind > size - ind)
		return (size - ind);
	return (ind);
}

void	move_to_top(t_list **dest, t_list **src, int pos)
{
	int	size;
	int	i;

	size = ft_lstsize(*dest);
	i = -1;
	if (pos <= (size / 2))
	{
		while (++i < pos)
			rb(dest);
	}
	else
	{
		while (++i < size - pos)
			rrb(dest);
	}
	pa(dest, src);
}

void	push_to_a(t_list **dest, t_list **src)
{
	int	size;
	int	pos_m;
	int	pos_r;

	size = ft_lstsize(*dest) - 1;
	while (*dest)
	{
		if (get_op_num(*dest, size) <= get_op_num(*dest, size - 1))
		{
			pos_m = get_pos_num(*dest, size);
			move_to_top(dest, src, pos_m);
		}
		else
		{
			pos_r = get_pos_num(*dest, size - 1);
			move_to_top(dest, src, pos_r);
			pos_m = get_pos_num(*dest, size);
			move_to_top(dest, src, pos_m);
			sa(src);
			size--;
		}
		size--;
	}
}
