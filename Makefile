NAME = libftpush_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# Source files
SRCS = 	push_swap.c \
        stack_control.c  \
		stack_control2.c \
		stack_control3.c \
		stack_control_utils.c \
		utils.c \
		utils2.c \
		algorithm.c \
		algorithm_utils.c \
		algorithm_utils2.c

# Object files
OBJS = $(SRCS:.c=.o)

# Rule to compile the executable
push_swap: $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o push_swap $(OBJS) $(LIBFT)
	@echo "Executable push_swap created."

# Default rule to compile all
all: $(LIBFT) $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule to compile libft
$(LIBFT):
	@cd $(LIBFT_DIR) && make

# Object file compilation rule
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS)
	@cd $(LIBFT_DIR) && make clean
	@echo "Object files removed."

# Clean all generated files
fclean: clean
	@rm -f $(NAME) push_swap
	@cd $(LIBFT_DIR) && make fclean
	@echo "All generated files removed."

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re $(LIBFT)