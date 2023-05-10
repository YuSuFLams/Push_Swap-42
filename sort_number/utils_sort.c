/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:20:10 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/10 23:02:42 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void _index(t_list *stack)
{
    while (stack)
    {
        stack->pos = 0;
        stack = stack->next;
    }
}

void get_index(t_list *stack)
{
	t_list	*data;
	t_list	*arr;
    
    _index(stack);
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
