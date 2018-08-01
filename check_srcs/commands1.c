/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:50:14 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/24 14:07:42 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"

void	ft_sa(t_check *check)
{
	t_list	*tmp;

	if (check->cola && check->cola->next)
	{
		tmp = check->cola;
		check->cola = check->cola->next;
		tmp->next = check->cola->next;
		check->cola->next = tmp;
	}
}

void	ft_sb(t_check *check)
{
	t_list	*tmp;

	if (check->colb && check->colb->next)
	{
		tmp = check->colb;
		check->colb = check->colb->next;
		tmp->next = check->colb->next;
		check->colb->next = tmp;
	}
}

void	ft_ss(t_check *check)
{
	ft_sa(check);
	ft_sb(check);
}

void	ft_pa(t_check *check)
{
	t_list	*tmp;

	if (check->colb)
	{
		tmp = check->colb;
		check->colb = check->colb->next;
		tmp->next = check->cola;
		check->cola = tmp;
	}
}

void	ft_pb(t_check *check)
{
	t_list	*tmp;

	if (check->cola)
	{
		tmp = check->cola;
		check->cola = check->cola->next;
		tmp->next = check->colb;
		check->colb = tmp;
	}
}
