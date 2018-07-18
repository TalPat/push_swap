/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:06:51 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/18 12:25:29 by tpatter          ###   ########.fr       */
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
	/**/ft_putendl("--------------------------------combine------------------------");
	while (!ft_checkorder(ps) || ps->colb)
	{
		if (!ps->colb)
		{
			ft_rra(ps);
			ft_putendl("rra");
		}
		else if ((ft_checkorder(ps) &&
				ft_atoi(ps->colb->content) < ft_atoi(ps->cola->content)) ||
				(ft_atoi(ps->colb->content) > ft_last(ps->cola)))
		{
			ft_pa(ps);
			ft_putendl("pa");
		}
		else
		{
			ft_rra(ps);
			ft_putendl("rra");
		}
	}
}
