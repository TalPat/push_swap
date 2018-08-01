/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:55:44 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/24 16:17:58 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	ft_rrr(t_ps *ps)
{
	t_list	*conveyer;
	t_list	*tmp;

	ft_putendl("rrr");
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

void	ft_printvis(int n, char col)
{
	if (col == 'G')
		ft_putstr_fd("\x1B[32m", 0);
	else if (col == 'R')
		ft_putstr_fd("\x1B[31m", 0);
	ft_putstr_fd("\t", 0);
	while (n-- > 0)
		ft_putchar_fd('|', 0);
	ft_putstr_fd("\x1B[0m", 0);
}

void	ft_visualise(t_ps *ps)
{
	t_list	*tmp;

	if (!ps->vis)
		return ;
	tmp = ps->cola;
	while (tmp)
	{
		ft_putstr_fd(tmp->content, 0);
		ft_printvis(ft_atoi(tmp->content), 'G');
		ft_putstr_fd("\n", 0);
		tmp = tmp->next;
	}
	tmp = ps->colb;
	while (tmp)
	{
		ft_putstr_fd(tmp->content, 0);
		ft_printvis(ft_atoi(tmp->content), 'R');
		ft_putstr_fd("\n", 0);
		tmp = tmp->next;
	}
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
	ft_visualise(ps);
}
