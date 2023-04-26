/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:54:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/26 12:27:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    ft_parser(char **str, int ac)
{
    char *s;
    t_us *arg;

    arg = NULL;
    s = ft_strjoin_all(str, ac);
    arg->split = ft_split(s, ' ');
}
