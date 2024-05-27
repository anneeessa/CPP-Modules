# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 19:01:46 by anmohamm          #+#    #+#              #
#    Updated: 2024/04/25 02:24:40 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = Fixed.cpp main.cpp
INCLUDES = Fixed.hpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} -I ${INCLUDES} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all
