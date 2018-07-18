/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basicinv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:45:04 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/18 11:23:40 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_findmax(t_list *list)
{
	t_list	*tmp;
	int		max;
	int		count;

	tmp = list->next;
	max = ft_atoi(list->content);
	while (tmp)
	{
		if (ft_atoi(tmp->content) > max)
			max = ft_atoi(tmp->content);
		tmp = tmp->next;
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

void	ft_basicinv(t_ps *ps)
{
	int	ronu;
	int	i;

	ps->pushed = 0;
	while (!ft_checkrevorder(ps))
	{
		i = 0;
		ronu = ft_findmax(ps->colb);
		if (ronu > ft_lstlen(ps->colb) / 2)
		{
			while (i < ft_lstlen(ps->colb) - ronu)
			{
				ft_putstr_fd("rrb\n", 1);
				ft_docom("rrb", ps);
				i++;
			}
		}
		else
		{
			while (i < ronu)
			{
				ft_putstr_fd("rb\n", 1);
				ft_docom("rb", ps);
				i++;
			}
		}
		if (!ft_checkrevorder(ps))
		{
			ps->pushed++;
			ft_putstr_fd("pa\n", 1);
			ft_docom("pa", ps);
		}
	}
	while (ps->pushed)
	{
		ps->pushed--;
		ft_putstr_fd("pb\n", 1);
		ft_docom("pb", ps);
	}
}
