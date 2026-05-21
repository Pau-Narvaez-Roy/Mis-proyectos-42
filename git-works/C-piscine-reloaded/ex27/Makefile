# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/19 16:26:53 by pnarvaez          #+#    #+#              #
#    Updated: 2026/05/21 15:43:14 by pnarvaez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCES = ./ft_display_file.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	@echo "Compiling...."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS):
	@$(CC) $(CFLAGS) -o $(OBJECTS) -c $(SOURCES)

all: $(NAME)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
