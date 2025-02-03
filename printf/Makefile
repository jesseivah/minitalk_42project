# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebitrus <jebitrus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 13:49:01 by jebitrus          #+#    #+#              #
#    Updated: 2023/07/13 18:11:25 by jebitrus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
HEADER = ft_printf.h
SRC		=	ft_print_chr.c \
			ft_print_str.c \
			ft_print_int.c \
			ft_print_hex.c \
			ft_print_uint.c \
			ft_print_ptr.c \
			ft_printf.c 

all: $(NAME)

$(NAME):
	$(MAKE) -C ./libft
	cp libft/libft.a ${NAME}
	ar rcs ${NAME} ${OBJS}
	cc -c -Wall -Werror -Wextra $(SRC)
	ar rcs ${NAME} *.o
clean:
	$(MAKE) clean -C ./libft
	rm -f *.o

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean test
