# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 16:29:52 by idias-al          #+#    #+#              #
#    Updated: 2023/08/16 18:35:35 by idias-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJS  =  main.o HumanA.o Weapon.o HumanB.o
NAME = weapon
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98
GREEN           :=      \033[0;32m
RED             :=      \033[1;31m
WHITE           :=      \033[1;37m
BOLD            :=      \033[1;1ms
CYAN            :=      \033[0;36m

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) 
		@echo "$(GREEN) [Success] ex03 compilation.$(WHITE)"

clean:
		@rm -rf $(OBJS)
		@echo "$(CYAN) [cleaned] ex03 objects."

fclean: clean
		@rm -rf $(NAME)
		@echo "$(CYAN) [cleaned] ex03 executable.$(WHITE)"

re: fclean all