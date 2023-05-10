/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_reverse_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:03:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 20:42:15 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_num_bonus(t_list **lst)
{
	t_list	*reverse;
	t_list	*tmp;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp = *lst;
	reverse = ft_lstlast(tmp);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(lst, reverse);
}

void	rra_bonus(t_list **src)
{
	reverse_num_bonus(src);
}

void	rrb_bonus(t_list **dest)
{
	reverse_num_bonus(dest);
}

void	rrr_bonus(t_list **src, t_list **dest)
{
	reverse_num_bonus(src);
	reverse_num_bonus(dest);
}
