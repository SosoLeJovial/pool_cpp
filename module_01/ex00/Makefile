# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 00:15:05 by tsofien-          #+#    #+#              #
#    Updated: 2024/10/06 16:36:13 by tsofien-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME	= megaphone

CC 		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
DFLAGS	= -MMD -MF $(@:.o=.d)

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

FILE_EXTENSION	= .cpp
SRCS			= megaphone.cpp \

OBJS_DIR		= .objs/
SRCS_PATH		= ./

################################################################################
#                                  Makefile  objs                              #
################################################################################

SHELL := /bin/bash

OBJS				= $(addprefix .objs/, ${SRCS:$(FILE_EXTENSION)=.o})
OBJ_MAIN			= $(addprefix .objs/, ${MAIN:$(FILE_EXTENSION)=.o})
DEPS				= $(addprefix .objs/, ${SRCS:$(FILE_EXTENSION)=.d})
DEPS_MAIN			= $(addprefix .objs/, ${MAIN:$(FILE_EXTENSION)=.d})

all:		$(NAME)

-include $(DEPS) $(DEPS_MAIN)

$(NAME):	${OBJS} ${OBJ_MAIN}
			$(CC) $(CFLAGS) $(DFLAGS) -o $@ ${OBJS} ${OBJ_MAIN}

.objs/%.o: 	$(SRCS_PATH)/%$(FILE_EXTENSION)
			mkdir -p $(OBJS_DIR)
			$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

clean:		
			rm -rf 	$(OBJS_DIR)

fclean:		clean
			@rm -f $(NAME)

re:         
			make fclean
			make all

.PHONY:		all clean fclean re

################################################################################