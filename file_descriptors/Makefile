/* Makefile template */

CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
DEPS =
OBJ =
NAME = 0-print_content

%.o : %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $^
