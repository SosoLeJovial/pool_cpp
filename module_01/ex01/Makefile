# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 00:15:05 by tsofien-          #+#    #+#              #
#    Updated: 2024/12/06 07:31:56 by tsofien-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME	= moar_brainz

CC 		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
DFLAGS	= -MMD -MF $(@:.o=.d)

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

FILE_EXTENSION  		= .cpp

SRCS                    = Zombie.cpp zombieHorde.cpp

OBJS_DIR                = .objs/
SRCS_PATH               = src
INCLUDE_PATH    		= includes

MAIN                    = main.cpp

################################################################################
#                                  Makefile  objs                              #
################################################################################

SHELL := /bin/bash
#SHELL := /usr/bin/env bash

OBJS                            = $(addprefix ${OBJS_DIR}, ${SRCS:$(FILE_EXTENSION)=.o})
OBJ_MAIN                        = $(addprefix ${OBJS_DIR}, ${MAIN:$(FILE_EXTENSION)=.o})
DEPS                            = $(addprefix ${OBJS_DIR}, ${SRCS:$(FILE_EXTENSION)=.d})
DEPS_MAIN                       = $(addprefix ${OBJS_DIR}, ${MAIN:$(FILE_EXTENSION)=.d})

all:            $(NAME)

-include $(DEPS) $(DEPS_MAIN)

$(NAME):        ${OBJS} ${OBJ_MAIN}
				$(CC) $(CFLAGS) -I${INCLUDE_PATH} -o $@ ${OBJS} ${OBJ_MAIN}

${OBJS_DIR}:
	mkdir -p $(OBJS_DIR)

${OBJS_DIR}%.o:         ${SRCS_PATH}/%.cpp | ${OBJS_DIR}
						$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@ -I$(INCLUDE_PATH)

clean:
	rm -rf  $(OBJS_DIR)

fclean:         clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

################################################################################