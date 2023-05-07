/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:45:02 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 18:20:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_num(char *s)
{
	int	i;

	i = 0;
	if ((s[0] == '-' || s[0] == '+') && !s[1])
		return (0);
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_number(char **str, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (!str[i][0] || !is_num(str[i]))
			ft_error();
		i++;
	}
}
