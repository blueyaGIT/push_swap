NAME = push_swap.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF_DIR = ./printf
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/libftprintf.a

# Source files
SRCS = 

BSCRS = 

# Object files
OBJS = $(SRCS:.c=.o)
OBJS_B = $(BSRCS:.c=.o)

# Default rule to compile all
all: $(NAME) $(LIBFT) $(LIBFTPRINTF)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule to compile the bonus files only when requested
bonus: $(OBJS_B)
	@ar rcs $(NAME) $(OBJS_B)
	@echo "Bonus library $(NAME) created."

# Rule to compile libft
$(LIBFT):
	cd $(LIBFT_DIR) && make

# Rule to compile libftprintf
$(LIBFTPRINTF): $(LIBFT)
	cd $(LIBFTPRINTF_DIR) && make

.c.c:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS) $(OBJS_B)
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

.PHONY: all clean fclean re bonus