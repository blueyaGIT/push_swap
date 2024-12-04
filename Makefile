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
CLEAR_LINE = \033[2K\r

# Source files
SRCS_FILES = 	push_swap.c \
        		stack_control.c  \
				stack_control2.c \
				stack_control3.c \
				stack_control_utils.c \
				utils.c \
				utils2.c \
				algorithm.c \
				algorithm_utils.c \
				algorithm_utils2.c

# Combine SRCS_DIR and the source filenames
SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

TOTAL_SRCS = $(words $(SRCS))
CURRENT = 0

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule to compile all
all: $(LIBFT) $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o push_swap $(OBJS) $(LIBFT)
	@echo "\n$(GREEN)✅ Done Compiling ✅$(NC)"

# Rule to compile libft
$(LIBFT):
	@echo "$(YELLOW)🚧 Compiling 🚧$(NC)"
	@sleep 0.3
	@$(MAKE) -C $(LIBFT_DIR)

# Object file compilation rule
.c.o:
	@$(eval CURRENT := $(shell echo $$(($(CURRENT) + 1))))
	@$(eval PERCENT := $(shell echo $$(($(CURRENT) * 100 / $(TOTAL_SRCS)))))
	@printf "$(CLEAR_LINE)$(YELLOW)Compiling $(PERCENT)%% [$(CURRENT)/$(TOTAL_SRCS)] $(CYAN)$<$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS)
	@cd $(LIBFT_DIR) && make clean

# Clean all generated files
fclean: clean
	@echo "$(YELLOW)🚧 Cleaning 🚧$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(RED)🧹 Cleaning in Progress 🧹$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(YELLOW)🛁 Scrubbing Code 🛁$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(CYAN)🧽 Polishing Project 🧽$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(MAGENTA)🧴 Tidying Up 🧴$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(GREEN)✅ Done Cleaning ✅$(NC)\n"
	@rm -f $(NAME) push_swap
	@cd $(LIBFT_DIR) && make fclean

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re $(LIBFT)