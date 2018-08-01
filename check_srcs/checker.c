/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:52:54 by tpatter           #+#    #+#             */
/*   Updated: 2018/08/01 10:46:41 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"
#include <stdlib.h>

void	ft_cleancheck(t_check *check)
{
	t_list	*tmp;

	tmp = check->cola;
	while (tmp)
	{
		free(tmp->content);
		tmp = tmp->next;
		free(check->cola);
		check->cola = tmp;
	}
	tmp = check->colb;
	while (tmp)
	{
		free(tmp->content);
		tmp = tmp->next;
		free(check->colb);
		check->colb = tmp;
	}
	free(check);
}

int		main(int ac, char **av)
{
	t_check	*check;

	check = (t_check*)malloc(sizeof(t_check));
	check->cola = NULL;
	check->colb = NULL;
	check->err = 0;
	if (ac == 1)
		ft_putstr("\n");
	else if (ft_checkerror(ac, av))
		ft_putstr_fd("Error\n", 2);
	else
	{
		ft_extract(av, check);
		if (ft_lststrduplicates(check->cola))
			ft_putstr_fd("Error\n", 2);
		else
			ft_check(check);
	}
	ft_cleancheck(check);
	return (0);
}
