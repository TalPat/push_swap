/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basicn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:25:52 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 09:29:41 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_findnmin(int n, t_list *list)
{
	t_list	*tmp;
	int		min;
	int		count;

	tmp = list->next;
	min = ft_atoi(list->content);
	while (n - 1 && tmp)
	{
		if (ft_atoi(tmp->content) < min)
			min = ft_atoi(tmp->content);
		tmp = tmp->next;
		n--;
	}
	count = 0;
	tmp = list;
	while (ft_atoi(tmp->content) != min)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	ft_basicn(int n, t_ps *ps)
{
	int	ronu;
	int count;

	if (n && ps->cola)
	{
		ronu = ft_findnmin(n, ps->cola);
		count = ronu;
		while (ronu)
		{
			ft_ra(ps);
			ronu--;
		}
		ft_pb(ps);
		while (count && ps->cola)
		{
			ft_rra(ps);
			count--;
		}
		ft_basicn(n - 1, ps);
	}
}
