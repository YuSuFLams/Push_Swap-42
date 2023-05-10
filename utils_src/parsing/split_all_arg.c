/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_all_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:54:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/06 18:22:53 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	*strjoin_all_arg(char **str, int ac)
{
	char	*s;
	char	*tmp;
	int		i;

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

char	**split_all_arg(char **str, int ac)
{
	char	**split;
	char	*s;

	s = strjoin_all_arg(str, ac);
	split = ft_split(s, ' ');
	free(s);
	return (split);
}

bool	test_int(long num)
{
	return (num >= INT_MIN && num <= INT_MAX);
}

void	int_min_max(char **s, int ac)
{
	int		i;

	i = -1;
	while (++i < ac)
	{
		if (!test_int(ft_atoi(s[i])))
			ft_error();
	}
}
