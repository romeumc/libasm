# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 17:15:21 by rmartins          #+#    #+#              #
#    Updated: 2021/04/17 20:09:28 by rmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			libasm.a
HEADER =		libasm.h

UNAME := $(shell uname -s)
ifeq ($(UNAME), Linux)
	ASM_FLAGS =	-f elf64 -g
else
	ASM_FLAGS =	-f macho64 -g
endif

AR = ar rcsv
OBJ_DIR = obj
SRC_DIR = src
OBJ = $(SRC:%.s=$(OBJ_DIR)/%.o)

SRC = ft_strlen.s


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $?

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	mkdir -p $(dir $@)
	nasm $(ASM_FLAGS) $< -o $@



clean:
	@echo $(ANSI_B_RED) "clean" $(ANSI_RESET)$(ANSI_F_BRED)
	rm -rf $(OBJ_DIR)
	@echo $(ANSI_RESET) ""

fclean: clean
	@echo $(ANSI_B_RED) "fclean" $(ANSI_RESET)$(ANSI_F_BRED)
	rm -f $(NAME)
	@echo $(ANSI_RESET) ""

re: fclean all


# tester
CFLAGS = -Wall -Wextra -Werror -g
SRC_DIR_TESTER = tester
OBJ_DIR_TESTER = tester_obj

SRC_TESTER = main.c

OBJ_TESTER = $(SRC_DIR_TESTER:%.c=$(OBJ_DIR_TESTE)/%.o)
$(OBJ_DIR_TESTER)/%.o: $(SRC_DIR_TESTER)/%.c
	mkdir -p $(dir $@)
	gcc $(CFLAGS) -c $< -o $@

tester: $(OBJ_TESTER)
	gcc $(CFLAGS) $(OBJ_TESTER) $(NAME) -o tester
	./tester


.PHONY: all clean fclean tester

# colors
ANSI_RESET = "\033[0m"
ANSI_B_RED = "\033[41m"
ANSI_B_BGREEN = "\033[42;1m"
ANSI_F_BRED = "\033[31;1m"
ANSI_F_BBLACK = "\033[30;1m"