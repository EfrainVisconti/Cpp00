# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 18:49:32 by eviscont          #+#    #+#              #
#    Updated: 2024/10/07 16:04:44 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp
HDRS = PhoneBook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re