/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:24:01 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 18:23:35 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_small_num(t_list *stack)
{
	int min;

	min = stack->content;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}
