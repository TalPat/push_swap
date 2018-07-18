/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:16:17 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/13 17:29:10 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "libft.h"

typedef struct	s_check
{
	t_list		*cola;
	t_list		*colb;
	int			nuint;
	int			err;
	char		*line;
}				t_check;

int				ft_checkerror(int ac, char **av);
void			ft_extract(char **av, t_check *check);
void			ft_check(t_check *check);
void			ft_sa(t_check *check);
void			ft_sb(t_check *check);
void			ft_ss(t_check *check);
void			ft_pa(t_check *check);
void			ft_pb(t_check *check);
void			ft_ra(t_check *check);
void			ft_rb(t_check *check);
void			ft_rr(t_check *check);
void			ft_rra(t_check *check);
void			ft_rrb(t_check *check);
void			ft_rrr(t_check *check);
void			ft_docom(char *str, t_check *check);
int				ft_ordered(t_list *lst);

#endif
