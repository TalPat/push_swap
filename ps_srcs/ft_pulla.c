/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pulla.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:05:10 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 13:43:04 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_pulla(t_ps *ps)
{
	unsigned int	ronu;
	unsigned int	i;

	while (ps->colb)
	{
		i = 0;
		ronu = ft_findmax(ps->colb);
		if (ronu > ft_lstlen(ps->colb) / 2)
		{
			while (i < ft_lstlen(ps->colb) - ronu)
			{
				ft_docom("rrb", ps);
				i++;
			}
		}
		else
		{
			while (i < ronu)
			{
				ft_docom("rb", ps);
				i++;
			}
		}
		ft_docom("pa", ps);
	}
}
