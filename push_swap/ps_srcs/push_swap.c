/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:59:49 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/18 13:18:15 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_ps	*ps;
	/**/t_list	*tmp;

	ps = (t_ps*)malloc(sizeof(t_ps));
	ps->err = 0;
	if (ft_checkerror(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	ft_extract(av, ps);
	if (ft_lststrduplicates(ps->cola))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	ft_orderfactor(ps);
	ft_push_swap(ps);
	/**/tmp = ps->cola;
	/**/while (tmp)
	/**/{
	/**/	ft_putstr_fd(tmp->content, 0);
	/**/	ft_putstr_fd("\n", 0);
	/**/	tmp = tmp->next;
	/**/}
	/**/tmp = ps->colb;
	/**/while (tmp)
	/**/{
	/**/	ft_putstr_fd(tmp->content, 0);
	/**/	ft_putstr_fd("\n", 0);
	/**/	tmp = tmp->next;
	/**/}
	return (0);
}
