/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:59:40 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/28 14:38:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_num(t_list **lst)
{
	int	swap;

	if (ft_lstsize(*lst) <= 1)
		return ;
	swap = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = swap;
}

void	sa(t_list **src)
{
	swap_num(src);
	ft_putstr("sa\n");
}

void	sb(t_list **dest)
{
	swap_num(dest);
	ft_putstr("sb\n");
}

void	ss(t_list **src, t_list **dest)
{
	swap_num(src);
	swap_num(dest);
	ft_putstr("ss\n");
}
