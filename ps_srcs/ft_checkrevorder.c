/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkrevorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:12:53 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/23 09:33:14 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

int	ft_checkrevorder(t_ps *ps)
{
	t_list	*tmp;

	if (ps->nuint == 1)
		return (1);
	tmp = ps->colb;
	while (tmp->next)
	{
		if (ft_atoi(tmp->content) < ft_atoi(tmp->next->content))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
