/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:50:14 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/16 15:14:16 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ft_sa(t_ps *ps)
{
	t_list	*tmp;

	if (ps->cola && ps->cola->next)
	{
		tmp = ps->cola;
		ps->cola = ps->cola->next;
		tmp->next = ps->cola->next;
		ps->cola->next = tmp;
	}
}

void	ft_sb(t_ps *ps)
{
	t_list	*tmp;

	if (ps->colb && ps->colb->next)
	{
		tmp = ps->colb;
		ps->colb = ps->colb->next;
		tmp->next = ps->colb->next;
		ps->colb->next = tmp;
	}
}

void	ft_ss(t_ps *ps)
{
	ft_sa(ps);
	ft_sb(ps);
}

void	ft_pa(t_ps *ps)
{
	t_list	*tmp;

	if (ps->colb)
	{
		tmp = ps->colb;
		ps->colb = ps->colb->next;
		tmp->next = ps->cola;
		ps->cola = tmp;
	}
}

void	ft_pb(t_ps *ps)
{
	t_list	*tmp;

	if (ps->cola)
	{
		tmp = ps->cola;
		ps->cola = ps->cola->next;
		tmp->next = ps->colb;
		ps->colb = tmp;
	}
}
