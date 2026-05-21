# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/19 16:26:53 by pnarvaez          #+#    #+#              #
#    Updated: 2026/05/21 11:17:48 by pnarvaez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = 	./srcs/ft_putchar.c\
			./srcs/ft_putstr.c\
			./srcs/ft_strcmp.c\
			./srcs/ft_strlen.c\
			./srcs/ft_swap.c

HEAD = ./includes

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RN = ranlib
RM = rm -f

.c.o:
	@$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

# Make 
$(NAME): $(OBJECTS)
	@echo "Compiling...."
	@$(AR) $(NAME) $(OBJECTS)
	@${RN} ${NAME}

all: $(NAME)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
