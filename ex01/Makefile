# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 15:57:56 by idias-al          #+#    #+#              #
#    Updated: 2023/08/06 12:00:01 by idias-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJS  =  AwesomePhoneBook.o Contacts.o PhoneBook.o
NAME = awesomePhoneBook
CC = c++
FLAGS = -Wextra -Werror -Wall -std=c++98 -DCMAKE_BUILD_TYPE=Debug
GREEN           :=      \033[0;32m
RED             :=      \033[1;31m
WHITE           :=      \033[1;37m
BOLD            :=      \033[1;1ms
CYAN            :=      \033[0;36m

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(FLAGS) -o $(NAME) $(OBJS) 
		@echo "$(GREEN) [Success] ex01 compilation.$(WHITE)"

clean:
		@rm -rf $(OBJS)
		@echo "$(CYAN) [cleaned] ex01 objects."

fclean: clean
		@rm -rf $(NAME)
		@echo "$(CYAN) [cleaned] ex01 executable.$(WHITE)"

re: fclean all