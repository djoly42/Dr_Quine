# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djoly <djoly@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/11 13:53:42 by djoly             #+#    #+#              #
#    Updated: 2018/02/23 18:25:10 by djoly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_GRACE	= Grace

NAME_COLLEEN	= Colleen

FILES_GRACE	= Grace.c

FILES_COLLEEN	= Colleen.c

OBJS	= $(SRCS:src/%.c=.obj/%.o)
#FLAGS	= -Wall -Wextra -Werror
CC		= gcc

all: $(NAME_GRACE) $(NAME_COLLEEN)

$(NAME): $(OBJS)
		@echo "\033[91mCompiling \033[97m"
		@$(CC) -o $(NAME) $(OBJS) $(LIB) $(FLAGS)
		@echo "\033[90mDone \033[97m"

.obj/%.o: src/%.c
	mkdir -p .obj
	@$(CC) -g -c $< -o $@ $(FLAGS) $(INC) $(FLAGS)

clean:
	@echo "\033[92mDeleting\033[97m"
	@rm -rf .obj
	@echo "\033[96mClean done\033[97m"

fclean: clean
	@echo "\033[92mDeleting\033[97m"
	@rm -f $(NAME)
	@echo "\033[96mFclean Done\033[97m"

re: fclean all

.PHONY: all clean fclean re
