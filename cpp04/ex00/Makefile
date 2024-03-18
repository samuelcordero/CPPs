# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 17:08:31 by sacorder          #+#    #+#              #
#    Updated: 2024/03/18 12:54:50 by sacorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorph
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -O3 -std=c++98
LDFLAGS = -I .
SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		wrongAnimal.cpp \
		wrongCat.cpp
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
