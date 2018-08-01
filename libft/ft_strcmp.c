/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:13:14 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 14:30:03 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[j])
			return ((unsigned char)s1[i] - (unsigned char)s2[j]);
		if (s1[i])
			i++;
		if (s2[j])
			j++;
	}
	return (0);
}
