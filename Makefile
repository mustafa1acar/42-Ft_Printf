NAME	= libftprintf
CC = gcc
INC = ft_printf.h
CFLAGS = -Wall -Wextra -Werror

SRCS	= ft_lowerx.c \
			ft_pointer.c \
			ft_printf.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_unsigned.c \
			ft_upperx.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME).a

$(NAME).a: $(OBJS)
	ar -rcs $(NAME).a $(OBJS)

%.o: %.c $(INC)
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME).a

re: fclean all

.PHONY: all, clean, fclean, re
