/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:50:14 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 09:02:20 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ft_sa(t_ps *ps)
{
	t_list	*tmp;

	if (ps->cola && ps->cola->next)
	{
		ft_putendl("sa");
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
		ft_putendl("sb");
		tmp = ps->colb;
		ps->colb = ps->colb->next;
		tmp->next = ps->colb->next;
		ps->colb->next = tmp;
	}
}

void	ft_ss(t_ps *ps)
{
	t_list	*tmp;

	ft_putendl("ss");
	if (ps->cola && ps->cola->next)
	{
		tmp = ps->cola;
		ps->cola = ps->cola->next;
		tmp->next = ps->cola->next;
		ps->cola->next = tmp;
	}
	if (ps->colb && ps->colb->next)
	{
		tmp = ps->colb;
		ps->colb = ps->colb->next;
		tmp->next = ps->colb->next;
		ps->colb->next = tmp;
	}
}

void	ft_pa(t_ps *ps)
{
	t_list	*tmp;

	if (ps->colb)
	{
		ft_putendl("pa");
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
		ft_putendl("pb");
		tmp = ps->cola;
		ps->cola = ps->cola->next;
		tmp->next = ps->colb;
		ps->colb = tmp;
	}
}
