NAME		:= philo

LIBFT		:= ./libft/libft.a
LIBFT_PATH	:= "./libft"

CC			:= cc

CFLAGS		:= -Wall -Wextra -Werror 

SRCS		:=	src/dinner.c \
				src/getters_setters.c \
				src/handle_errors.c \
				src/init.c \
				src/monitoring.c \
				src/parsing.c \
				src/philo.c \
				src/synchro_utils.c \
				src/utils.c

OBJS		:=	$(SRCS:.c=.o)


%.o: %.c
	$(CC) $(CFLAGS)-Iheaders -c $< -o $@ 

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(LIBFT)

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re