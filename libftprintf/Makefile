# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabusala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 10:54:28 by rabusala          #+#    #+#              #
#    Updated: 2024/09/19 10:55:53 by rabusala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


SRCS = ft_printf.c\
	ft_lowhexa.c\
	ft_uphexa.c\
	ft_unsigned.c\
	ft_pointer.c
	
SRCS += $(LIBFT_SRCS)	
CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRCS:.c=.o)

OBJECTS += $(LIBFT_OBJECTS)

all: $(NAME)
LIBFT_DIR = ./libft
include libft/inc.mk


%.o : %.c
	cc $(CFLAGS) -I $(LIBFT_DIR) -c $< -o $@
$(NAME) : $(OBJECTS)
	ar rcs $@ $^
clean :
	rm -f $(OBJECTS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : all clean fclean re
