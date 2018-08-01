/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 11:21:06 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 14:05:04 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int		ft_findpiv(t_ps *ps)
{
	int		a;
	int		b;
	int		c;
	int		count;
	t_list	*tmp;

	a = ft_atoi(ps->cola->content);
	tmp = ps->cola;
	count = ft_lstlen(ps->cola) / 2;
	while (--count)
		tmp = tmp->next;
	b = ft_atoi(tmp->content);
	while (tmp->next)
		tmp = tmp->next;
	c = ft_atoi(tmp->content);
	if ((a > b && a < c) || (a < b && a > c))
		return (a);
	else if ((b > a && b < c) || (b < a && b > c))
		return (b);
	return (c);
}

int		ft_findpivinv(t_ps *ps)
{
	int		a;
	int		b;
	int		c;
	int		count;
	t_list	*tmp;

	a = ft_atoi(ps->colb->content);
	tmp = ps->colb;
	count = ft_lstlen(ps->colb) / 2;
	while (--count)
		tmp = tmp->next;
	b = ft_atoi(tmp->content);
	while (tmp->next)
		tmp = tmp->next;
	c = ft_atoi(tmp->content);
	if ((a > b && a < c) || (a < b && a > c))
		return (a);
	else if ((b > a && b < c) || (b < a && b > c))
		return (b);
	return (c);
}

void	ft_quickinv(t_ps *ps)
{
	int	piv;
	int	i;

	while (ps->colb)
	{
		if (ft_lstlen(ps->colb) < 4)
		{
			ft_basicinv(ps);
			break ;
		}
		else
		{
			i = ft_lstlen(ps->colb);
			piv = ft_findpivinv(ps);
			while (i--)
			{
				if (ft_atoi(ps->colb->content) >= piv)
					ft_docom("pa", ps);
				else
					ft_docom("rb", ps);
			}
		}
	}
	while (ps->colb)
		ft_docom("pa", ps);
}

void	ft_quicksort(t_ps *ps)
{
	int	piv;
	int	i;

	while (ps->cola)
	{
		if (ft_lstlen(ps->cola) < 4)
		{
			ft_three(ps);
			break ;
		}
		else
		{
			piv = ft_findpiv(ps);
			i = ft_lstlen(ps->cola);
			while (i--)
			{
				if (ft_atoi(ps->cola->content) <= piv)
					ft_docom("pb", ps);
				else
					ft_docom("ra", ps);
			}
		}
	}
	while (ps->cola)
		ft_docom("pb", ps);
}
