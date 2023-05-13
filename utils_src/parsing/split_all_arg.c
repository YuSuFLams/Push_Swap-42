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
	i = 1;
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

int	_isdigit(char *s)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
		if (*(s + i) >= '0' && *(s + i) <= '9')
			return (1);
	return (0);
}

void	check_empty(char **s, int len)
{
	int	i;

	i = 0;
	while (++i < len)
	{
		if (!_isdigit(s[i]))
			ft_error();
	}
}
