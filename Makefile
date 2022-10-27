# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: puttasa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 16:29:24 by puttasa           #+#    #+#              #
#    Updated: 2022/10/27 18:08:27 by puttasa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_check.c ft_puthex.c ft_putnbr.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

.c.o :
	@echo "\033[93mCompiling $< to $@...\033[0m"
	@gcc $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	@echo "\033[93mMaking .a file...\033[0m"
	@ar -rcs $(NAME) $(OBJS)

clean :
	@echo "\033[93mCleaning object...\033[0m"
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
