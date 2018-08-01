/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:54:02 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/24 14:15:37 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"

void	ft_ra(t_check *check)
{
	t_list	*tmp;
	t_list	*conveyer;

	if (check->cola && check->cola->next)
	{
		tmp = check->cola;
		conveyer = check->cola;
		check->cola = check->cola->next;
		while (conveyer->next)
			conveyer = conveyer->next;
		conveyer->next = tmp;
		tmp->next = NULL;
	}
}

void	ft_rb(t_check *check)
{
	t_list	*tmp;
	t_list	*conveyer;

	if (check->colb && check->colb->next)
	{
		tmp = check->colb;
		conveyer = check->colb;
		check->colb = check->colb->next;
		while (conveyer->next)
			conveyer = conveyer->next;
		conveyer->next = tmp;
		tmp->next = NULL;
	}
}

void	ft_rr(t_check *check)
{
	ft_ra(check);
	ft_rb(check);
}

void	ft_rra(t_check *check)
{
	t_list	*conveyer;
	t_list	*tmp;

	if (check->cola && check->cola->next)
	{
		conveyer = check->cola;
		while (conveyer->next->next)
			conveyer = conveyer->next;
		tmp = conveyer->next;
		conveyer->next = NULL;
		tmp->next = check->cola;
		check->cola = tmp;
	}
}

void	ft_rrb(t_check *check)
{
	t_list	*conveyer;
	t_list	*tmp;

	if (check->colb && check->colb->next)
	{
		conveyer = check->colb;
		while (conveyer->next->next)
			conveyer = conveyer->next;
		tmp = conveyer->next;
		conveyer->next = NULL;
		tmp->next = check->colb;
		check->colb = tmp;
	}
}
