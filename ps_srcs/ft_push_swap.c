/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:07:41 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/24 12:49:39 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_push_swap(t_ps *ps)
{
	if (!ft_checkorder(ps))
	{
		if (ps->nuint <= 3)
			ft_three(ps);
		else if (ps->nuint < 20)
			ft_basic(ps);
		else if (ps->nuint < 105)
		{
			ft_altquicksort(ps);
			ft_pulla(ps);
		}
		else
		{
			ft_altquicksort(ps);
			ft_quickinv(ps);
			ft_quicksort(ps);
			ft_pulla(ps);
		}
	}
}
