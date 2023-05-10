/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:59:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 20:42:37 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_num_bonus(t_list **lst)
{
	t_list	*rotate;
	t_list	*tmp;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	rotate = ft_lstlast(*lst);
	rotate->next = tmp;
	tmp->next = NULL;
}

void	ra_bonus(t_list **src)
{
	rotate_num_bonus(src);
}

void	rb_bonus(t_list **dest)
{
	rotate_num_bonus(dest);
}

void	rr_bonus(t_list **src, t_list **dest)
{
	ra_bonus(src);
	rb_bonus(dest);
}
