# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 15:57:56 by idias-al          #+#    #+#              #
#    Updated: 2023/08/07 22:46:40 by idias-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJS  =  AwesomePhoneBook.o Contacts.o PhoneBook.o
NAME = awesomePhoneBook
CC = c++
FLAGS = -Wextra -Werror -Wall -std=c++98 -DCMAKE_BUILD_TYPE=Debug
GREEN           :=      \033[1;32m
WHITE           :=      \033[0;37m
CYAN            :=      \033[1;36m

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