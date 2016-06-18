CC = gcc
CFLAGS = -Werror -Wextra -Wall -pedantic
SRC = cross.c print_char.c
# DEPS = prototypes.h
OBJ = $(SRC:.c=.o)
NAME = libprintf.a

all: $(NAME)

$(NAME): $(OBJ) $(DEPS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
