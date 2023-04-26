/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:33:50 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/26 13:51:03 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_error(void)
{
    ft_putstr("Error\n");
    exit(-1);
}

void    test_arg(char **s, int ac)
{
    int i;
    int j;
    
    i = 1;
    while (i < ac)
    {
        j = 0;
        while (s[i][j])
        {
            if ((s[i][j] == '+' || s[i][j] == '-') && s[i][j + 1])
                j++;
            if (!((s[i][j] >= '0' && s[i][j] <= '9') || s[i][j] == ' '))
                ft_error();
            j++;
        }
        i++;
    }
}

void check_duplicate(char **str, int ac)
{
    char    **split;
    char    *s;
    int     i;
    int     j;
    
    s = ft_strjoin_all(str, ac);
    split = ft_split(s, ' ');
    i = 0;
    while (i < count(s, ' ') - 1)
    {
        j = i + 1;
        while (j < count(s, ' '))
        {
            if (ft_strcmp(split[i], split[j]) == 0)
                ft_error();
            j++;
        }
        i++;
    }
}