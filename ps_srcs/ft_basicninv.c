/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basicninv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:45:31 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 09:29:30 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_findnmax(int n, t_list *list)
{
	t_list	*tmp;
	int		max;
	int		count;

	tmp = list->next;
	max = ft_atoi(list->content);
	while (n - 1 && tmp)
	{
		if (ft_atoi(tmp->content) > max)
			max = ft_atoi(tmp->content);
		tmp = tmp->next;
		n--;
	}
	count = 0;
	tmp = list;
	while (ft_atoi(tmp->content) != max)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	ft_basicninv(int n, t_ps *ps)
{
	int	ronu;
	int count;

	if (n && ps->colb)
	{
		ronu = ft_findnmax(n, ps->colb);
		count = ronu;
		while (ronu)
		{
			ft_rb(ps);
			ronu--;
		}
		ft_pa(ps);
		while (count && ps->colb)
		{
			ft_rrb(ps);
			count--;
		}
		ft_basicninv(n - 1, ps);
	}
}
