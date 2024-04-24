# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 18:40:19 by anmohamm          #+#    #+#              #
#    Updated: 2024/04/22 18:48:19 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnercessaryviolence
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS}  ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean: 
		@rm -rf ${OBJ}

re: fclean all
