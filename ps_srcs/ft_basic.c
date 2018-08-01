/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:37:57 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 13:32:19 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_findmin(t_list *list)
{
	t_list	*tmp;
	int		min;
	int		count;

	tmp = list->next;
	min = ft_atoi(list->content);
	while (tmp)
	{
		if (ft_atoi(tmp->content) < min)
			min = ft_atoi(tmp->content);
		tmp = tmp->next;
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

void	ft_basic(t_ps *ps)
{
	unsigned int	ronu;
	unsigned int	i;

	ps->pushed = 0;
	while (!ft_checkorder(ps))
	{
		i = 0;
		ronu = ft_findmin(ps->cola);
		if (ronu > ft_lstlen(ps->cola) / 2)
		{
			while (i++ < ft_lstlen(ps->cola) - ronu)
				ft_docom("rra", ps);
		}
		else
			while (i++ < ronu)
				ft_docom("ra", ps);
		if (!ft_checkorder(ps))
		{
			ps->pushed++;
			ft_docom("pb", ps);
		}
	}
	while (ps->pushed--)
		ft_docom("pa", ps);
}
