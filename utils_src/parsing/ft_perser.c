/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:54:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/28 14:51:58 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*ft_parser(char **str, int ac)
{
    int     i;
    int     n;
    char    *s;
    char    **split;
    t_list  *data;

    s = ft_strjoin_all(str, ac);
    split = ft_split(s, ' ');
    data = NULL;
    i = -1;
    while (++i < count(s, ' '))
    {
        n = ft_atoi(split[i]);
        ft_lstadd_back(&data, ft_lstnew(n));
    }
    return (data);
}