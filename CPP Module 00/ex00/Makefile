# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:16:23 by anmohamm          #+#    #+#              #
#    Updated: 2024/03/14 22:55:32 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = megaphone.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean: 
		@rm -rf ${OBJ}

re: fclean all
