/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:54:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/01 19:43:36 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*ft_perser(char **str, int ac)
{
    int     i;
    char    *s;
    char    **split;
    t_list  *data;

    s = ft_strjoin_all(str, ac);
    split = ft_split(s, ' ');
    data = NULL;
    i = -1;
    while (++i < count(s, ' '))
        ft_lstadd_back(&data, ft_lstnew(ft_atoi(split[i])));
    return (data);
}