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

# Rule to create the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule to compile the executable
push_swap: $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) -o push_swap $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	@echo "Executable push_swap created."

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
	@cd $(LIBFT_DIR) && make clean
	@cd $(LIBFTPRINTF_DIR) && make clean
	@echo "Object files removed."

# Clean all generated files
fclean: clean
	@rm -f $(NAME) push_swap
	@cd $(LIBFT_DIR) && make fclean
	@cd $(LIBFTPRINTF_DIR) && make fclean
	@echo "All generated files removed."

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re $(LIBFT) $(LIBFTPRINTF)