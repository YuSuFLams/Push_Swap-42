/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:23:24 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/28 14:35:45 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list *ft_lstnew(int content)
{
    t_list *s;

    s = (t_list *)malloc(sizeof(t_list));
    if (!s)
        return (NULL);
    s->content = content;
    s->next = NULL;
    return (s);
}
