# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 10:03:36 by idias-al          #+#    #+#              #
#    Updated: 2023/08/03 15:58:03 by idias-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS  =  megaphone.o
NAME = megaphone
CC = c++
CFLAGS = -Wextra -Werror -Wall -pedantic  -std=c++98
GREEN           :=      \033[0;32m
RED             :=      \033[1;31m
WHITE           :=      \033[1;37m
BOLD            :=      \033[1;1ms
CYAN            :=      \033[0;36m

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 
		@echo "$(GREEN) [Success] ex00 compilation.$(WHITE)"

clean:
		@rm -rf $(OBJS)
		@echo "$(CYAN) [cleaned] ex00 objects."

fclean: clean
		@rm -rf $(NAME)
		@echo "$(CYAN) [cleaned] ex00 executable.$(WHITE)"

re: fclean all