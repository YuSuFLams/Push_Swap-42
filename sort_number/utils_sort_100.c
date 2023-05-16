/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:20:10 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/16 23:51:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_index(t_list *stack)
{
	t_list	*data;
	t_list	*arr;

	data = stack;
	while (data)
	{
		arr = stack;
		while (arr)
		{
			if (data->content < arr->content)
				arr->pos += 1;
			arr = arr->next;
		}
		data = data->next;
	}
}

int	get_pmin_num(t_list *list)
{
	int	min;
	int	i;
	int	pos;

	min = list->content;
	i = 0;
	pos = 0;
	while (list)
	{
		if (list->content < min)
		{
			pos = i;
			min = list->content;
		}
		i++;
		list = list->next;
	}
	return (pos);
}

int	get_pmax_num(t_list *list)
{
	int	max;
	int	i;
	int	pos;

	max = list->content;
	i = 0;
	pos = 0;
	while (list)
	{
		if (list->content > max)
		{
			pos = i;
			max = list->content;
		}
		i++;
		list = list->next;
	}
	return (pos);
}

void	push_to_stack_a(t_list **dest, t_list **src)
{
	int	pos_max;

	pos_max = get_pmax_num(*dest);
	while (ft_lstsize(*dest))
	{
		if (pos_max == 0)
			pa(dest, src);
		else if (pos_max <= ft_lstsize(*dest) / 2)
			rb(dest);
		else if (pos_max > ft_lstsize(*dest) / 2)
			rrb(dest);
		if (ft_lstsize(*dest))
			pos_max = get_pmax_num(*dest);
	}
}
