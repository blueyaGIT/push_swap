NAME = libftpush_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF_DIR = ./printf
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/libftprintf.a

# Source files
SRCS = 	ft_push_swap.c \
		stack.c \
		stack2.c \
		utils.c \
		find_utils.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule to compile all
all: $(LIBFT) $(LIBFTPRINTF) $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	@echo "Library $(NAME) created."

# Rule to compile libft
$(LIBFT):
	@cd $(LIBFT_DIR) && make

# Rule to compile libftprintf
$(LIBFTPRINTF): $(LIBFT)
	@cd $(LIBFTPRINTF_DIR) && make

# Object file compilation rule
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS)
	@echo "Object files removed."
	@cd $(LIBFT_DIR) && make clean
	@cd $(LIBFTPRINTF_DIR) && make clean
	@echo "Cleaned libft and libftprintf."

# Clean everything (object files and libraries)
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."
	@cd $(LIBFT_DIR) && make fclean
	@cd $(LIBFTPRINTF_DIR) && make fclean
	@echo "Cleaned libft and libftprintf completely."

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
