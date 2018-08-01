/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerror.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:45:56 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 13:24:34 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"
#include <stdlib.h>

int	ft_toobig(char *str)
{
	char	**nums;
	int		i;
	long	numlong;

	i = 0;
	nums = ft_strsplit(str, ' ');
	while (nums[i])
	{
		numlong = ft_atol(nums[i]);
		if (numlong > 2147483647 || numlong < -2147483648)
			return (1);
		i++;
	}
	i = 0;
	while (nums[i])
		free(nums[i++]);
	free(nums);
	return (0);
}

int	ft_checkerror(int ac, char **av)
{
	int	i;
	int j;

	i = 1;
	if (ac < 2)
		return (1);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-')
				return (1);
			j++;
		}
		if (ft_toobig(av[i]))
			return (1);
		i++;
	}
	return (0);
}
