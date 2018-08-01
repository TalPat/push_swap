/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:06:51 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 14:30:31 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_last(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next)
		tmp = tmp->next;
	return (ft_atoi(tmp->content));
}

void	ft_combine(t_ps *ps)
{
	while (!ft_checkorder(ps) || ps->colb)
	{
		if (!ps->colb)
			ft_docom("rra", ps);
		else if ((ft_checkorder(ps) &&
				ft_atoi(ps->colb->content) < ft_atoi(ps->cola->content)) ||
				(ft_atoi(ps->colb->content) > ft_last(ps->cola)))
		{
			ft_docom("pa", ps);
		}
		else
		{
			ft_docom("rra", ps);
		}
	}
}
