/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:31:12 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 14:26:54 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_three(t_ps *ps)
{
	t_list	*tmp;

	while (!ft_checkorder(ps))
	{
		if (ft_atoi(ps->cola->content) > ft_atoi(ps->cola->next->content))
			ft_docom("sa", ps);
		tmp = ps->cola->next;
		if (!ft_checkorder(ps))
		{
			if (ft_atoi(tmp->content) > ft_atoi(tmp->next->content))
				ft_docom("rra", ps);
			else
				ft_docom("ra", ps);
		}
	}
}
