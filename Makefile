NAME = libftpush_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = ./srcs
LIBFT_DIR = ./includes/libft
LIBFT = $(LIBFT_DIR)/libft.a
GREEN = \033[32m
YELLOW = \033[33m
NC = \033[0m

# Source files
SRCS = 	$(SRCS_DIR)/push_swap.c \
        $(SRCS_DIR)/stack_control.c  \
		$(SRCS_DIR)/stack_control2.c \
		$(SRCS_DIR)/stack_control3.c \
		$(SRCS_DIR)/stack_control_utils.c \
		$(SRCS_DIR)/utils.c \
		$(SRCS_DIR)/utils2.c \
		$(SRCS_DIR)/algorithm.c \
		$(SRCS_DIR)/algorithm_utils.c \
		$(SRCS_DIR)/algorithm_utils2.c

# Object files
OBJS = $(SRCS:.c=.o)

# Rule to compile the executable
push_swap: $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) -o push_swap $(OBJS) $(LIBFT)
	@echo "$(GREEN)Compiled Successfully ✅$(NC)"

# Default rule to compile all
all: $(LIBFT) $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Rule to compile libft
$(LIBFT):
	@echo "$(YELLOW)🚧Compiling🚧$(NC)"
	@$(MAKE) -C $(LIBFT_DIR)

# Object file compilation rule
.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

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