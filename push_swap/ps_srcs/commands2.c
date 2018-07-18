/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:54:02 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/16 16:50:08 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ft_ra(t_ps *ps)
{
	t_list	*tmp;
	t_list	*conveyer;

	if (ps->cola && ps->cola->next)
	{
		tmp = ps->cola;
		conveyer = ps->cola;
		ps->cola = conveyer->next;
		while (conveyer->next)
			conveyer = conveyer->next;
		conveyer->next = tmp;
		conveyer->next->next = NULL;
	}
}

void	ft_rb(t_ps *ps)
{
	t_list	*tmp;
	t_list	*conveyer;

	if (ps->colb && ps->colb->next)
	{
		tmp = ps->colb;
		conveyer = ps->colb;
		ps->colb = ps->colb->next;
		while (conveyer->next)
			conveyer = conveyer->next;
		conveyer->next = tmp;
		conveyer->next->next = NULL;
	}
}

void	ft_rr(t_ps *ps)
{
	ft_ra(ps);
	ft_rb(ps);
}

void	ft_rra(t_ps *ps)
{
	t_list	*conveyer;
	t_list	*tmp;

	if (ps->cola && ps->cola->next)
	{
		conveyer = ps->cola;
		while (conveyer->next->next)
			conveyer = conveyer->next;
		tmp = conveyer->next;
		conveyer->next = NULL;
		tmp->next = ps->cola;
		ps->cola = tmp;
	}
}

void	ft_rrb(t_ps *ps)
{
	t_list	*conveyer;
	t_list	*tmp;

	if (ps->colb && ps->colb->next)
	{
		conveyer = ps->colb;
		while (conveyer->next->next)
			conveyer = conveyer->next;
		tmp = conveyer->next;
		conveyer->next = NULL;
		tmp->next = ps->colb;
		ps->colb = tmp;
	}
}
