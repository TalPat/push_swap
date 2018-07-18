# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpatter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/15 11:09:16 by tpatter           #+#    #+#              #
#    Updated: 2018/07/13 18:28:14 by tpatter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	checker
SRC		=	./check_srcs/checker.c\
			./check_srcs/commands1.c\
			./check_srcs/ft_check.c\
			./check_srcs/commands3.c\
			./check_srcs/commands2.c\
			./check_srcs/ft_checkerror.c\
			./check_srcs/ft_extract.c
OBJ		:=	$($(SRC):./check_srcs%.c=.%.o)
HEADER	=	includes
INCLUDES = -I ./libft/includes -I ./includes
FLAGS	=	-Wall -Werror -Wextra
LIBDIR	=	./libft
LIBFT	=	$(LIBDIR)/libft.a
STATLIB	=	statlibf

all: $(NAME)
$(NAME): lib
	gcc -c $(FLAGS) $(SRC) $(INCLUDES) #-L. $(LIBFT)
	gcc -o $(NAME) $(OBJ) -L. $(LIBFT)

lib:
	make -C ./libft
##	make clean -C ./libft
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
