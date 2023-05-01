/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:33:50 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/01 18:16:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_error(void)
{
    ft_putstr("Error\n");
    exit(-1);
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

void    test_char(char *s)
{
    int i;

    i = 0;
    if ((*s == '-' || *s == '+'))
    {
        if (!
        s[1])
            ft_error();
        else
            i++;
    }
    while (*(s + i))
    {
        if (*(s + i) < '0' || *(s + i) > '9')
            ft_error();
        i++;
    }
}

void    check_arg_min_max(char **str, int ac)
{
    char    **split;
    char    *s;
    int     i;
    s = ft_strjoin_all(str, ac);
    split = ft_split(s, ' ');
    i = -1;
    while (++i < count(s, ' '))
    {
        test_char(split[i]);
        ft_atoi(split[i]);
    }
}