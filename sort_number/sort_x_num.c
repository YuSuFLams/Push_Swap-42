/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_x_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 01:32:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/10 21:35:53 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void push_to_stack_b(t_list **src, t_list **dest, int chunk, int gro)
{
    while (*src)
    {
        
    }
}

void push_stack_b(t_list **dest, t_list **src)
{
	int	pos_min;

	pos_min = get_pmin_num(*dest);
	while (ft_lstsize(*dest) > 3)
	{
		if (test_integer(*dest) && (!*dest))
			return ;
		if (pos_min == 0)
			pa(dest, src);
		else if (pos_min <= ft_lstsize(dest) / 2)
			rb(dest);
		else if (pos_min > ft_lstsize(dest) / 2)
			rrb(dest);
		pos_min = get_pmin_num(*dest);
	}
	sort_4(dest, src);
}

void	sort_x(t_list **src, t_list **dest);
{
	int	size;
    int chunk;

	size = ft_lstsize(*src);
	chunk = size / 12;
    while (ft_lstsize(stack_a))
    {
        
    }
}
