/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:49:17 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 09:36:59 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_merge(t_ps *ps)
{
	int	count;

	count = 2;
	while (count < ps->nuint)
	{
		while (ps->cola)
			ft_basicn(count, ps);
		count = count * 2;
		ft_basicninv(ps->nuint % count, ps);
		while (ps->colb)
			ft_basicninv(count, ps);
		count = count * 2;
	}
	while (ps->cola)
		ft_basicn(count, ps);
	count = count * 2;
	ft_basicninv(ps->nuint % count, ps);
	while (ps->colb)
		ft_basicninv(count, ps);
}
