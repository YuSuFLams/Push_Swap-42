/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:54:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/04/27 16:10:02 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*ft_parser(char **str, int ac)
{
    char *s;
    char **split;

    s = ft_strjoin_all(str, ac);
    split = ft_split(s, ' ');
}