# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 14:23:16 by anmohamm          #+#    #+#              #
#    Updated: 2024/06/26 14:23:16 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Bureaucrat.cpp

OBJ		=	$(SRC:.cpp=.o)

%.o	: 	%.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

all :	$(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
		@rm -f $(OBJ)

fclean :
		@rm -f $(NAME) $(OBJ)

re		: fclean all

.phony : all clean fclean re