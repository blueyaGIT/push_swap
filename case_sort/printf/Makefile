# Variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

# List of source files (all in the parent directory 't1')
SRCS = 	ft_utils.c \
		ft_print_hex_nbr.c \
		ft_print_nbr.c \
		ft_print_str.c \
		ft_print_unbr.c \
		ft_print_voidptr.c \
		ft_printf.c

# BSRCS = ft_parseflags_bonus.c \
# 		ft_atoi_flags_bonus.c \
# 		ft_itoa_buffer_bonus.c 

# Object files
OBJS = $(SRCS:.c=.o)
# OBJS_B = $(BSRCS:.c=.o)

# Rule to compile the main library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule to compile the bonus files only when requested
# bonus: $(OBJS) $(OBJS_B)
# 	@ar rcs $(NAME) $(OBJS) $(OBJS_B)
# 	@echo "Bonus library $(NAME) created."

# Rule for compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Default rule
all: $(NAME)

# Clean object files
clean:
	@rm -f $(OBJS) $(OBJS_B)
	@echo "Object files removed."

# Clean everything (object files and library)
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re bonus
