# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 17:08:31 by sacorder          #+#    #+#              #
#    Updated: 2024/04/05 00:45:38 by sacorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -O3 -std=c++98 #-g3 #-fsanitize=address
LDFLAGS = -I .
SRC =	main.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		AMateria.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

%.o: %.c
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:: fclean
re:: all
