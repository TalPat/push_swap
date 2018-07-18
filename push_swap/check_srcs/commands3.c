/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:55:44 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/13 17:25:00 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"

void	ft_rrr(t_check *check)
{
	ft_rra(check);
	ft_rrb(check);
}

void	ft_docom(char *str, t_check *check)
{
	if (!ft_strcmp(str, "sa"))
		ft_sa(check);
	else if (!ft_strcmp(str, "sb"))
		ft_sb(check);
	else if (!ft_strcmp(str, "ss"))
		ft_ss(check);
	else if (!ft_strcmp(str, "pa"))
		ft_pa(check);
	else if (!ft_strcmp(str, "pb"))
		ft_pb(check);
	else if (!ft_strcmp(str, "ra"))
		ft_ra(check);
	else if (!ft_strcmp(str, "rb"))
		ft_rb(check);
	else if (!ft_strcmp(str, "rr"))
		ft_rr(check);
	else if (!ft_strcmp(str, "rra"))
		ft_rra(check);
	else if (!ft_strcmp(str, "rrb"))
		ft_rrb(check);
	else if (!ft_strcmp(str, "rrr"))
		ft_rrr(check);
	else
		check->err = 1;
}
