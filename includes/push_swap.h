/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:50:57 by tpatter           #+#    #+#             */
/*   Updated: 2018/07/25 12:49:06 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct	s_ps
{
	t_list		*cola;
	t_list		*colb;
	int			nuint;
	int			err;
	char		*line;
	int			ofactor;
	int			pushed;
	int			vis;
}				t_ps;

int				main(int ac, char **av);
int				ft_checkerror(int ac, char **av);
void			ft_extract(char **av, t_ps *ps);
void			ft_check(t_ps *ps);
void			ft_push_swap(t_ps *ps);
int				ft_checkorder(t_ps *ps);
int				ft_checkrevorder(t_ps *ps);
int				ft_findmax(t_list *list);
int				ft_findmin(t_list *list);
void			ft_orderfactor(t_ps *ps);
void			ft_sa(t_ps *ps);
void			ft_sb(t_ps *ps);
void			ft_ss(t_ps *ps);
void			ft_pa(t_ps *ps);
void			ft_pb(t_ps *ps);
void			ft_ra(t_ps *ps);
void			ft_rb(t_ps *ps);
void			ft_rr(t_ps *ps);
void			ft_rra(t_ps *ps);
void			ft_rrb(t_ps *ps);
void			ft_rrr(t_ps *ps);
void			ft_docom(char *str, t_ps *ps);
void			ft_basic(t_ps *ps);
void			ft_basicinv(t_ps *ps);
void			ft_three(t_ps *ps);
void			ft_dualsolve(t_ps *ps);
void			ft_split(t_ps *ps);
void			ft_combine(t_ps *ps);
void			ft_tinysort(int inc, t_ps *ps);
void			ft_quicksort(t_ps *ps);
void			ft_quickinv(t_ps *ps);
void			ft_pulla(t_ps *ps);
void			ft_basicn(int n, t_ps *ps);
void			ft_basicninv(int n, t_ps *ps);
void			ft_merge(t_ps *ps);
void			ft_altquicksort(t_ps *ps);
void			ft_altquickinv(t_ps *ps);

#endif
