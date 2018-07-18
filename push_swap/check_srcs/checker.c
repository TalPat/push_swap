/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:52:54 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/15 09:59:35 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_check	*check;

	check = (t_check*)malloc(sizeof(t_check));
	check->err = 0;
	if (ft_checkerror(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	/**/ft_putstr_fd("errr check success\n", 2);
	ft_extract(av, check);
	/**/ft_putstr_fd("extract success\n", 2);
	ft_check(check);
	return (0);
}
