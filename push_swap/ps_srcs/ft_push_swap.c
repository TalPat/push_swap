/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:07:41 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/18 12:18:53 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_push_swap(t_ps *ps)
{
	if (!ft_checkorder(ps))
	{
//		if (ps->nuint <= 3)
//			ft_three(ps);
//		else
			ft_split(ps);
			ft_basic(ps);
			ft_basicinv(ps);
			ft_combine(ps);
//		ft_dualsolve(ps);
	}
}
