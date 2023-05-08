/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_x_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 01:32:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/08 02:16:03 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_x(t_list **src, t_list **dest);
// {
// 	t_list  *p_min;

// 	p_min = get_small_num(*src);
// 	while (ft_lstsize(*src) > 5)
// 	{
// 		if (test_integer(*src) && (!*dest))
// 			return ;
// 		if (p_min == 0)
// 			pb(src, dest);
// 		else if (p_min <= (ft_lstsize(*src) / 2))
// 				ra(src);
// 		else if (p_min > (ft_lstsize(*src) / 2))
// 			rra(src);
// 		p_min = get_small_num(*src); 
// 	}
// 	sort_5(src, dest);
// }