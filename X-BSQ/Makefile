# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 13:38:26 by ajordan-          #+#    #+#              #
#    Updated: 2021/06/30 13:41:42 by ajordan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ
SRC = main.c
$(NAME):
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)
clean:
	@/bin/rm -f *.o
fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all
