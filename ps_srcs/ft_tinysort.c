/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tinysort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 09:25:44 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 13:35:09 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_tinysort(int inc, t_ps *ps)
{
	int	i;

	while (ft_lstlen(ps->cola) > (unsigned int)inc)
	{
		ft_pb(ps);
	}
	ft_basic(ps);
	while (ps->colb)
	{
		i = 0;
		while (i < inc)
		{
			ft_pa(ps);
			i++;
		}
		ft_basic(ps);
	}
}
