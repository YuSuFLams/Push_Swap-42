/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:39:03 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/02 17:48:34 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char *ft_strjoin_all(char **str)
{
    char *s;
    int i;

    s = str[1];
    i = 1;
    while (str[++i])
        s = ft_strjoin(s, str[i]);
    return (s);
}