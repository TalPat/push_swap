/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:09:44 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 13:07:26 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"
#include <stdlib.h>

int		ft_ordered(t_check *check)
{
	t_list	*tmp;

	tmp = check->cola;
	while (tmp->next)
	{
		if (ft_atoi(tmp->content) > ft_atoi(tmp->next->content))
			return (0);
		tmp = tmp->next;
	}
	if (check->colb)
		return (0);
	return (1);
}

void	ft_check(t_check *check)
{
	while (ft_grabline(0, &check->line))
	{
		ft_docom(check->line, check);
		free(check->line);
	}
	if (check->err)
		ft_putstr_fd("Error\n", 2);
	else if (ft_ordered(check))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
