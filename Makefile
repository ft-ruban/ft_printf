# Variables
CFILES =	ft_printf.c \
			ft_printf_cases.c \

OFILES = $(CFILES:%.c=%.o)
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

# Compiler + flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Targets
NAME = libftprintf.a
TEST_EXEC = test_program

# Default Rule
all: $(NAME) $(LIBFT)

# Create the Static Library
 $(NAME): $(OFILES)  ft_printf.h
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OFILES)

# Build object files
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
# Build the Test Executable
$(TEST_EXEC): $(NAME) $(LIBFT) main.c 
	$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT) -o $(TEST_EXEC)
# Clean Object Files
clean:
	rm -f $(OFILES)
# Clean All Build Artifacts
fclean: clean
	rm -f $(NAME) $(TEST_EXEC)

re: fclean all

# ensure libft is built before linking
$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

.PHONY: all clean fclean re
