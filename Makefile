CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthexa.c ft_putunsigned.c ft_printf.c \

OB = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OB)
		ar rc $(NAME) $(OB)

$(OB): ft_printf.h

clean:
		rm -f $(OB)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean

