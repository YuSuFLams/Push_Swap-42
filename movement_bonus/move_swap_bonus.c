/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:59:40 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 20:42:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_num_bonus(t_list **lst)
{
	int	swap;

	if (ft_lstsize(*lst) <= 1)
		return ;
	swap = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = swap;
}

void	sa_bonus(t_list **src)
{
	swap_num_bonus(src);
}

void	sb_bonus(t_list **dest)
{
	swap_num_bonus(dest);
}

void	ss_bonus(t_list **src, t_list **dest)
{
	swap_num_bonus(src);
	swap_num_bonus(dest);
}
