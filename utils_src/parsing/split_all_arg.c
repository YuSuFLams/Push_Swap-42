/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_all_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:54:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/04 21:44:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char *strjoin_all_arg(char **str, int ac)
{
    char *s;
    char *tmp;
    int i;

    s = ft_strdup("");
    i = 0;
    while (i < ac)
    {
        tmp = ft_strjoin(s, str[i]);
        free(s);
        s = ft_strjoin(tmp, " ");
        free(tmp);
        i++;
    }
    return (s);
}

char **split_all_arg(char **str, int ac)
{
    char **split;
    char *s;

    s = strjoin_all_arg(str, ac);
    split = ft_split(s, ' ');
    free(s);
    return (split);
}


void	int_min_max(char **str, int ac)
{
    char **s;
    char *tmp;
    int i;

    tmp = strjoin_all_arg(str, ac);
    s = split_all_arg(str, ac);
    i = -1;
    while ((++i) < count(tmp, ' '))
        ft_atoi(s[i]);
}