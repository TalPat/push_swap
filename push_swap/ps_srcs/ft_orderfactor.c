/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orderfactor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:03:18 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/16 16:52:41 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ft_orderfactor(t_ps *ps)
{
	t_list	*tmp;
	int		ordered;

	if (ps->nuint == 1)
		ps->ofactor = 100;
	else
	{
		tmp = ps->cola;
		ordered = 0;
		while (tmp->next)
		{
			if (ft_atoi(tmp->content) < ft_atoi(tmp->next->content))
				ordered++;
			tmp = tmp->next;
		}
		ordered = ordered * 100 / (ps->nuint - 1);
		ps->ofactor = ordered;
	}
}
