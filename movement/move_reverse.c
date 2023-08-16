/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:03:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/25 14:01:32 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_num(t_list **lst)
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

void	rra(t_list **src)
{
	reverse_num(src);
	ft_putstr("rra\n");
}

void	rrb(t_list **dest)
{
	reverse_num(dest);
	ft_putstr("rrb\n");
}

void	rrr(t_list **src, t_list **dest)
{
	reverse_num(src);
	reverse_num(dest);
	ft_putstr("rrr\n");
}
