# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 17:08:31 by sacorder          #+#    #+#              #
#    Updated: 2024/04/19 12:10:00 by sacorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ideas
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g3 #-fsanitize=address
LDFLAGS = -I .
SRC =	main.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:: fclean
re:: all
