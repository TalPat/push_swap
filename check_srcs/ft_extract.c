/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:53:18 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 17:23:03 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"
#include <stdlib.h>

void	ft_endarr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_extract(char **av, t_check *check)
{
	int		i;
	int		j;
	char	**mynus;

	i = 1;
	check->cola = NULL;
	check->colb = NULL;
	while (av[i])
	{
		mynus = ft_strsplit(av[i], ' ');
		j = 0;
		while (mynus[j])
		{
			if (!check->cola)
				check->cola = ft_lstnew(mynus[j], ft_strlen(mynus[j]));
			else
				ft_lstaddend(check->cola, mynus[j], ft_strlen(mynus[j]));
			j++;
		}
		ft_endarr(mynus);
		i++;
	}
	check->nuint = ft_lstlen(check->cola);
}
