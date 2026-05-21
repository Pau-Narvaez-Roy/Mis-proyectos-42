# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/19 16:26:53 by pnarvaez          #+#    #+#              #
#    Updated: 2026/05/21 12:51:24 by pnarvaez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCES = ./ft_putstr.c

HEAD = ./lib.h

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
