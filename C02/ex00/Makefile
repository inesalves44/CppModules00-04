# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 16:29:52 by idias-al          #+#    #+#              #
#    Updated: 2023/08/16 17:27:07 by idias-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJS  =  main.o Fixed.o
NAME = a.out
CXX = c++
CXXFLAGS = -g -Wextra -Werror -Wall -std=c++98
GREEN           :=      \033[0;32m
RED             :=      \033[1;31m
WHITE           :=      \033[1;37m
BOLD            :=      \033[1;1ms
CYAN            :=      \033[0;36m

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) 
		@echo "$(GREEN) [Success] ex00 compilation.$(WHITE)"

clean:
		@rm -rf $(OBJS)
		@echo "$(CYAN) [cleaned] ex00 objects."

fclean: clean
		@rm -rf $(NAME)
		@echo "$(CYAN) [cleaned] ex00 executable.$(WHITE)"

re: fclean all