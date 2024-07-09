# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 15:04:12 by anmohamm          #+#    #+#              #
#    Updated: 2024/06/26 15:04:12 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Intern.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp 

OBJ		=	$(SRC:.cpp=.o)

%.o	: 	%.cpp
		@$(CC) $(CFLAGS) -c $< -o $@



$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all :	$(NAME)
clean : 
		@rm -f $(OBJ)

fclean :
		@rm -f $(NAME) $(OBJ)

re		: fclean all

.phony : all clean fclean re