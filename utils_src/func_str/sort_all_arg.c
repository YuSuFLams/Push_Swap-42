/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:39:03 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/25 17:47:18 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char *ft_strjoin_all(char **str, int ac)
{
    char *s;
    int i;

    s = str[1];
    i = 2;
    while (i < ac)
    {
        s = ft_strjoin(s, str[i]);
        i++;
    }
    return (s);
}