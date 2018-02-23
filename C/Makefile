# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djoly <djoly@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/11 13:53:42 by djoly             #+#    #+#              #
#    Updated: 2018/02/23 18:44:52 by djoly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_GRACE	= Grace

NAME_COLLEEN	= Colleen

NAME_SULLY	= Sully

FILE_GRACE	= Grace.c

FILE_COLLEEN	= Colleen.c

FILE_SULLY	= Sully.c

CC		= gcc

all: $(NAME_GRACE) $(NAME_COLLEEN) $(NAME_SULLY)

$(NAME_GRACE):
		@echo "\033[91mCompiling grace\033[97m"
		@$(CC) -o $(NAME_GRACE) $(FILE_GRACE)
		@echo "\033[90mDone \033[97m"

$(NAME_COLLEEN):
		@echo "\033[91mCompiling colleen\033[97m"
		@$(CC) -o $(NAME_COLLEEN) $(FILE_COLLEEN)
		@echo "\033[90mDone \033[97m"

$(NAME_SULLY):
		@echo "\033[91mCompiling colleen\033[97m"
		@$(CC) -o $(NAME_SULLY) $(FILE_SULLY)
		@echo "\033[90mDone \033[97m"


clean:
	@echo "\033[92mDeleting\033[97m"
	@rm -rf .obj
	@echo "\033[96mClean done\033[97m"

fclean: clean
	@echo "\033[92mDeleting\033[97m"
	@rm -f $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)
	@echo "\033[96mFclean Done\033[97m"

re: fclean all

.PHONY: all clean fclean re
