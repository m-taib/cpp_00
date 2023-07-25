# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 18:16:15 by mtaib             #+#    #+#              #
#    Updated: 2023/07/25 15:07:28 by mtaib            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
OSRC = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
all : $(NAME)

%.o : %.cpp
	CC -c $(CFLAGS)  $<

NAME : $(OSRC)
	CC $(CFLAGS) $^ -o $@

clean : 
	rm -rf *.o
fclean :
	rm -rf *.o $(NAME)

.PHONY : all clean fclean re
