# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:18:31 by anmohamm          #+#    #+#              #
#    Updated: 2024/03/14 23:40:51 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC =	main.cpp Contact.cpp PhoneBook.cpp Utils.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean: 
		@rm -rf ${OBJ}

re: fclean all