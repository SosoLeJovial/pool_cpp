# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 00:15:05 by tsofien-          #+#    #+#              #
#    Updated: 2024/11/29 20:01:27 by tsofien-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME	= reference_pointer

CC 		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
DFLAGS	= -MMD -MF $(@:.o=.d)

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

FILE_EXTENSION	= .cpp

OBJS_DIR		= .objs/
MAIN			= main.cpp

################################################################################
#                                  Makefile  objs                              #
################################################################################

#SHELL := /bin/bash
SHELL := /usr/bin/env bash

OBJ_MAIN			= ${OBJS_DIR}${MAIN:${FILE_EXTENSION}=.o}
DEPS_MAIN			= $(OBJ_MAIN:.o=.d)

all:		$(NAME)

-include $(DEPS_MAIN)

$(NAME):	${OBJ_MAIN}
			$(CC) $(CFLAGS) $(DFLAGS) -o $@ ${OBJ_MAIN}

${OBJS_DIR}%.o: 	./%$(FILE_EXTENSION)
		mkdir -p $(OBJS_DIR)
		$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

clean:		
			rm -rf 	$(OBJS_DIR)

fclean:		clean
			@rm -f $(NAME)

re:         fclean all

.PHONY:		all clean fclean re

################################################################################