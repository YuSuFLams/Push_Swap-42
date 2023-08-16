/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:59:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/04 01:58:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_num(t_list **lst)
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

void	ra(t_list **src)
{
	rotate_num(src);
	ft_putstr("ra\n");
}

void	rb(t_list **dest)
{
	rotate_num(dest);
	ft_putstr("rb\n");
}

void	rr(t_list **src, t_list **dest)
{
	ra(src);
	rb(dest);
	ft_putstr("rr\n");
}
