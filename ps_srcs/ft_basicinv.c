/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basicinv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:45:04 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 13:32:40 by tpatter          ###   ########.fr       */
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
	unsigned int	ronu;
	unsigned int	i;

	ps->pushed = 0;
	while (!ft_checkrevorder(ps))
	{
		i = 0;
		ronu = ft_findmax(ps->colb);
		if (ronu > ft_lstlen(ps->colb) / 2)
		{
			while (i++ < ft_lstlen(ps->colb) - ronu)
				ft_docom("rrb", ps);
		}
		else
			while (i++ < ronu)
				ft_docom("rb", ps);
		if (!ft_checkrevorder(ps))
		{
			ps->pushed++;
			ft_docom("pa", ps);
		}
	}
	while (ps->pushed--)
		ft_docom("pb", ps);
}
