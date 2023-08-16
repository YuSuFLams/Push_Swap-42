/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:19:42 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 18:10:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_list **src, t_list **dest)
{
	int	pos_min;

	pos_min = get_pmin_num(*src);
	while (ft_lstsize(*src) > 4)
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
	sort_4(src, dest);
	pa(dest, src);
}
