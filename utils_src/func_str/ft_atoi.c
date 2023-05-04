/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:39:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/04 01:24:50 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_atoi(const char *str)
{
    long int    n;
    int         sign;

    n = 0;
    sign = 1;
    while (*str == 32 && (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= (-1);
        str++;
    }
    while (*str && *str >= '0' && *str <= '9')
        n = n * 10 + *str++ - '0'; 
    if (n * sign < INT_MIN || n * sign > INT_MAX)
        ft_error();
    return ((int )n * sign);
}
