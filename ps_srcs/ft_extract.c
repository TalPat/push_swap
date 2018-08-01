/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:53:18 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 17:16:36 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
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

void	ft_extract(char **av, t_ps *ps)
{
	int		i;
	int		j;
	char	**mynus;

	i = 1;
	ps->cola = NULL;
	ps->colb = NULL;
	while (av[i])
	{
		mynus = ft_strsplit(av[i], ' ');
		j = 0;
		while (mynus[j])
		{
			if (!ps->cola)
				ps->cola = ft_lstnew(mynus[j], ft_strlen(mynus[j]));
			else
				ft_lstaddend(ps->cola, mynus[j], ft_strlen(mynus[j]));
			j++;
		}
		ft_endarr(mynus);
		i++;
	}
	ps->nuint = ft_lstlen(ps->cola);
}
