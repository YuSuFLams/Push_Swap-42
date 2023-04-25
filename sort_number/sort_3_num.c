/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:08:59 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/25 13:33:44 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_3(t_list **src)
{
	t_list *tmp;
	t_list *tmp_1;
	t_list *tmp_2;
	
	tmp = (*src);
	tmp_1 = tmp->next;
	tmp_2 = tmp_1->next;
	if (tmp->content > tmp_1->content && tmp->content < tmp_2->content)
		sa(src);
	else if (tmp->content > tmp_1->content && tmp_1->content > tmp_2->content)
	{
		sa(src);
		rra(src);
	}
	else if (tmp->content < tmp_1->content && tmp->content > tmp_2->content)
		rra(src);
	else if (tmp->content > tmp_1->content && tmp->content > tmp_2->content \
		&& tmp_1->content < tmp_2->content)
		ra(src);
	else if (tmp->content < tmp_1->content && tmp_1->content < tmp_2->content \
		&& tmp_1->content > tmp_2->content)
	{
		sa(src);
		ra(src);
	}
}
