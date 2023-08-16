/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:40:53 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 18:09:41 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_4(t_list **src, t_list **dest)
{
	int	pos_min;

	pos_min = get_pmin_num(*src);
	while (ft_lstsize(*src) > 3)
	{
		if (test_integer(*src) && (!*dest))
			return ;
		if (pos_min == 0)
			pb(src, dest);
		else if (pos_min <= 2)
			ra(src);
		else if (pos_min > 2)
			rra(src);
		pos_min = get_pmin_num(*src);
	}
	sort_3(src);
	pa(dest, src);
}
