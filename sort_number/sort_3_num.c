/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:08:59 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/05 19:15:41 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_list **src)
{
	int	tmp;
	int	tmp_1;
	int	tmp_2;

	tmp = (*src)->content;
	tmp_1 = (*src)->next->content;
	tmp_2 = (*src)->next->next->content;
	if (tmp > tmp_1 && tmp < tmp_2)
		sa(src);
	else if (tmp > tmp_1 && tmp_1 > tmp_2)
	{
		sa(src);
		rra(src);
	}
	else if (tmp < tmp_1 && tmp > tmp_2)
		rra(src);
	else if (tmp > tmp_2 && tmp_2 > tmp_1)
		ra(src);
	else if (tmp < tmp_2 && tmp_2 < tmp_1)
	{
		sa(src);
		ra(src);
	}
}
