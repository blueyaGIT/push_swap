NAME = libftpush_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = ./srcs
LIBFT_DIR = ./includes/libft
LIBFT = $(LIBFT_DIR)/libft.a
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
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
push_swap: $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) -o push_swap $(OBJS) $(LIBFT)
	@echo "$(GREEN)✅ Done Compiling ✅$(NC)"

# Default rule to compile all
all: $(LIBFT) $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Rule to compile libft
$(LIBFT):
	@echo "$(YELLOW)🚧 Compiling 🚧$(NC)"
	@$(MAKE) -C $(LIBFT_DIR)

# Object file compilation rule
.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS)
	@cd $(LIBFT_DIR) && make clean

# Clean all generated files
fclean: clean
	@echo "$(RED)🧹 Cleaning in Progress 🧹$(NC)"
	@sleep 0.3
	@echo "$(YELLOW)🛁 Scrubbing Code 🛁$(NC)"
	@sleep 0.3
	@echo "$(CYAN)🧽 Polishing Project 🧽$(NC)"
	@sleep 0.3
	@echo "$(GREEN)🧴 Tidying Up 🧴$(NC)"
	@sleep 0.3
	@echo "$(GREEN)✅ Cleaning Done ✅$(NC)"
	@rm -f $(NAME) push_swap
	@cd $(LIBFT_DIR) && make fclean

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re $(LIBFT)