/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:09:44 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/13 17:36:34 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"
#include <stdlib.h>

int		ft_ordered(t_list *cola)
{
	int	val;

	val = ft_atoi(cola->content);
	cola = cola->next;
	while (cola)
	{
		if (ft_atoi(cola->content) < val)
			return (0);
		cola = cola->next;
	}
	return (1);
}

void	ft_check(t_check *check)
{
	while (get_next_line(0, &check->line) && !check->err)
		ft_docom(check->line, check);
	if (ft_ordered(check->cola))
		ft_putstr("OK\n");
	else if (check->err)
		ft_putstr_fd("Error\n", 2);
	else
		ft_putstr("KO\n");
}
