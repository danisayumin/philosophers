# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 17:21:19 by danielasayu       #+#    #+#              #
#    Updated: 2024/07/08 15:45:22 by dsayumi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### Bonus Flag Definition ####
BONUS_MODE = "false"

#### Source code ####
PHILO = src/philo.c


#### Objects ####
PHILO_OBJ = $(PHILO:.c=.o)
OBJS = $(PHILO_OBJ)

#### Definitions ####
PROJECT_NAME = philosophers
PHILO_NAME = philo

#### Compiler #### 
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#### Colors ####
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
WHITE = \033[0;37m
RESET = \033[0m

#### Rules ####
all: $(PROJECT_NAME)

$(PROJECT_NAME):
	@echo "$(YELLOW) ⟦ Compilando⟧ $(RESET)"
	@make $(PHILO_NAME)
	@echo "$(GREEN)✓ Compilado com sucesso $(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED)✗ Objetos Removidos $(RESET)"

fclean:
	@rm -f $(OBJS)
	@rm -f $(PHILO_NAME)
	@echo "$(RED)✗ Objetos Removidos $(RESET)"
	@echo "$(RED)✗ Executavel $(PHILO_NAME) Removido $(RESET)"
	@echo "$(RED)✗✗✗✗✗ Removi a porra toda 😎 ✗✗✗✗✗$(RESET)"

test:
	@echo "$(YELLOW) ☆*: .｡. o(≧▽≦)o .｡.:*☆ $(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re testss