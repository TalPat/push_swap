/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:55:44 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/16 15:13:50 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ft_rrr(t_ps *ps)
{
	ft_rra(ps);
	ft_rrb(ps);
}

void	ft_docom(char *str, t_ps *ps)
{
	if (!ft_strcmp(str, "sa"))
		ft_sa(ps);
	else if (!ft_strcmp(str, "sb"))
		ft_sb(ps);
	else if (!ft_strcmp(str, "ss"))
		ft_ss(ps);
	else if (!ft_strcmp(str, "pa"))
		ft_pa(ps);
	else if (!ft_strcmp(str, "pb"))
		ft_pb(ps);
	else if (!ft_strcmp(str, "ra"))
		ft_ra(ps);
	else if (!ft_strcmp(str, "rb"))
		ft_rb(ps);
	else if (!ft_strcmp(str, "rr"))
		ft_rr(ps);
	else if (!ft_strcmp(str, "rra"))
		ft_rra(ps);
	else if (!ft_strcmp(str, "rrb"))
		ft_rrb(ps);
	else if (!ft_strcmp(str, "rrr"))
		ft_rrr(ps);
	else
		ps->err = 1;
}
