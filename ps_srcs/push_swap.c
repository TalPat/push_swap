/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:59:49 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 18:43:28 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

void	ft_cleanps(t_ps *ps)
{
	t_list	*tmp;

	tmp = ps->cola;
	while (tmp)
	{
		free(tmp->content);
		tmp = tmp->next;
		free(ps->cola);
		ps->cola = tmp;
	}
	tmp = ps->colb;
	while (tmp)
	{
		free(tmp->content);
		tmp = tmp->next;
		free(ps->colb);
		ps->cola = tmp;
	}
	free(ps);
}

void	ft_initialise(t_ps *ps)
{
	ps->cola = NULL;
	ps->colb = NULL;
	ps->err = 0;
	ps->vis = 0;
}

int		main(int ac, char **av)
{
	t_ps	*ps;

	ps = (t_ps*)malloc(sizeof(t_ps));
	ft_initialise(ps);
	if (!ft_strcmp(av[ac - 1], "-v"))
	{
		ps->vis = 1;
		av[ac - 1] = NULL;
		ac--;
	}
	if (ac == 1)
		ft_putstr("\n");
	else if (ft_checkerror(ac, av))
		ft_putstr_fd("Error\n", 2);
	else
	{
		ft_extract(av, ps);
		if (ft_lststrduplicates(ps->cola))
			ft_putstr_fd("Error\n", 2);
		else
			ft_push_swap(ps);
	}
	ft_cleanps(ps);
	return (0);
}
