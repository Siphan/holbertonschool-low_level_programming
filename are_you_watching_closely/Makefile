CC = gcc
CFLAGS = -Werror -Wextra -Wall -pedantic
SRC = printf.c print_number.c print_longnumber.c decimal_to_hex.c print_string.c print_char.c
DEPS = prototypes.h
OBJ = $(SRC:.c=.o)
NAME = libprintf.a

all: $(NAME)

$(NAME): $(OBJ) $(DEPS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
