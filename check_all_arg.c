/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:33:50 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/25 16:11:55 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool    test_arg(char **s, int ac)
{
    int i;
    int j;
    
    i = 1;
    while (i < ac)
    {
        j = 0;
        while (s[i][j])
        {
            if (!((s[i][j] >= '0' && s[i][j] <= '9') || s[i][j] == ' '))
                return (false);
            j++;
        }
        i++;
    }
    return (true);
}