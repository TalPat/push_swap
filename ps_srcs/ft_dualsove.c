/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dualsove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:32:21 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/17 15:12:14 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_aborder(t_ps *ps)
{
	t_list	*tmp;
	int		ab;

	ab = 0;
	tmp = ps->colb;
	if (!ps->colb || ft_lstlen(ps->colb) == 1)
		ab++;
	else
	{
		while (tmp->next)
		{
			if (ft_atoi(tmp->content) > ft_atoi(tmp->next->content))
				return (0);
			tmp = tmp->next;
		}
		ab++;
	}
	ab += ft_checkorder(ps);
	if (ab == 2)
		return (1);
	return (0);
}

int		ft_firstbiggest(t_list *lst)
{
	t_list	*tmp;
	int		first;

	first = ft_atoi(lst->content);
	tmp = lst->next;
	while (tmp)
	{
		if (ft_atoi(tmp->content) > first)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_dualsolve(t_ps *ps)
{
	while (!ft_checkorder(ps))
	{
		while (!ft_aborder(ps))
		{
			if (ft_atoi(ps->cola->content) > ft_atoi(ps->cola->next->content) &&
				!ft_firstbiggest(ps->cola))
			{
				ft_sa(ps);
				ft_putendl("sa");
			}
			if (!ft_checkorder(ps))
			{
				ft_ra(ps);
				ft_putendl("ra");
			}
		}
	}
}
