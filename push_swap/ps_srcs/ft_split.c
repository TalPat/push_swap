/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:18:03 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/18 11:21:53 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_split(t_ps *ps)
{
	int	i;

	i = ps->nuint / 2;
	while (i)
	{
		ft_pb(ps);
		ft_putendl("pb");
		i--;
	}
}
