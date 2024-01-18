# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 14:50:39 by hufuster          #+#    #+#              #
#    Updated: 2024/01/18 19:24:37 by hufuster         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

CC=gcc
CFLAGS=-Wall -Wextra -Werror

RM=rm -f
AR=ar rcs

SRC=printf.c printchars.c get_case.c ex_case.c case_c.c case_error.c \
case_percent.c case_d.c case_p.c case_s.c case_u.c case_x.c case_xx.c \
hex_funcs.c case_i.c
OBJ=$(SRC:.c=.o)
DEPENDS=$(SRC:.c=.d)

all: $(NAME)

clean:
	Make -C libft clean
	$(RM) $(OBJ) $(DEPENDS)

$(NAME): $(OBJ) libft/libft.a
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

libft/libft.a: FORCE
	Make -C libft

fclean: clean
	$(RM) $(NAME)
	$(RM) test
	Make -C libft fclean

re: fclean all

test: $(NAME) FORCE
	$(CC) main.c $(NAME) -o test
	clear
	./test

%.o: %.c
	$(CC) -c $(CFLAGS) -MMD -MP $<

FORCE:

-include $(DEPENDS)

.PHONY:
	all clean fclean re bonus