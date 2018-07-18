/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:53:18 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/16 18:32:32 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"
#include <stdlib.h>

void	ft_extract(char **av, t_check *check)
{
	int		i;
	int		j;
	char	**mynus;
	char	*s;
	/**/t_list	*tmp;

	i = 1;
	check->cola = NULL;
	check->colb = NULL;
	while (av[i])
	{
		mynus = ft_strsplit(av[i], ' ');
		j = 0;
		while (mynus[j])
		{
			if (!check->cola)
				check->cola = ft_lstnew(mynus[j], ft_strlen(mynus[j]));
			else
				ft_lstaddend(check->cola, mynus[j], ft_strlen(mynus[j]));
			j++;
		}
		free(mynus);
		i++;
	}
/*tmp = check->cola;
while (tmp)
{
	ft_putendl(tmp->content);
	tmp = tmp->next;
}*/
	check->nuint = ft_lstlen(check->cola);
}
