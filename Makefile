# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 17:28:22 by tpatter           #+#    #+#              #
#    Updated: 2018/07/25 17:51:32 by tpatter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMECH		=	checker
CHSRCDIR	=	check_srcs/
CHSRC		=	checker.c\
				commands1.c\
				commands2.c\
				commands3.c\
				ft_check.c\
				ft_checkerror.c\
				ft_extract.c
CHOBJDIR	=	chobj/
CHOBJ		=	$(CHSRC:%.c=%.o)
CHOBJPATH	:=	$(addprefix $(CHOBJDIR), $(CHOBJ))

NAMEPS		=	push_swap
PSSRCDIR	=	ps_srcs/
PSSRC		=	commands1.c\
				ft_bubble.c\
				ft_orderfactor.c\
				commands2.c\
				ft_checkerror.c\
				ft_pulla.c\
				commands3.c\
				ft_checkorder.c\
				ft_push_swap.c\
				ft_altquick.c\
				ft_checkrevorder.c\
				ft_quick.c\
				ft_basic.c\
				ft_combine.c\
				ft_split.c\
				ft_basicinv.c\
				ft_dualsove.c\
				ft_tinysort.c\
				ft_basicn.c\
				ft_extract.c\
				push_swap.c\
				ft_basicninv.c\
				ft_merge.c
PSOBJDIR	=	psobj/
PSOBJ		=	$(PSSRC:%.c=%.o)
PSOBJPATH		:=	$(addprefix $(PSOBJDIR), $(PSOBJ))

HEADER		=	includes/
CFLAGS		=	-Wall -Werror -Wextra
CC			=	gcc
LIBDIR		=	libft/
LIB			=	$(LIBDIR)libft.a
LIBHEAD		=	$(LIBDIR)includes/
LIBLINK		=	-L $(LIBDIR) -l ft
INCLUDES	=	-I $(HEADER) -I $(LIBHEAD)

all: $(NAMECH) $(NAMEPS)

$(NAMECH): $(CHOBJPATH) $(LIB)
	$(CC) -o $(NAMECH) $(CHOBJPATH) $(LIBLINK) $(INCLUDES) $(CFLAGS)

$(CHOBJDIR)%.o: $(CHSRCDIR)%.c
	mkdir -p $(CHOBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

$(LIB):
	make -C $(LIBDIR)

$(NAMEPS): $(PSOBJPATH) $(LIB)
	$(CC) -o $(NAMEPS) $(PSOBJPATH) $(LIBLINK) $(INCLUDES) $(CFLAGS)

$(PSOBJDIR)%.o: $(PSSRCDIR)%.c
	mkdir -p $(PSOBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

clean:
	rm -rf $(PSOBJPATH) $(CHOBJPATH)
	make -C $(LIBDIR) clean

fclean:	clean
	rm -rf $(NAMECH) $(NAMEPS)
	make -C $(LIBDIR) fclean

re: fclean all
