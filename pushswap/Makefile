CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -Lft_libft -lft

SRCS = main.c push_swap_funcs.c short_sort.c utils.c push_swap_utils.c check_nums.c init.c
OBJS = $(SRCS:.c=.o)
TARGET = push_swap

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
