# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 14:28:20 by bwach             #+#    #+#              #
#    Updated: 2023/11/02 14:37:17 by bwach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBFT = libft
LDFLAGS = -Llibft
LDLIBS = -lft

SRC =  printf.h ft_printf.c ft_print_hex.c ft_print_unsigned.c ft_print_utils.c \
	
	
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@make -C ${LIBFT}
	@cp ${LIBFT}/libft.a ${NAME}
	@mv libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -g -I . -c $< -o $(<:.c=.o) 

all: $(NAME)

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus : $(OBJ) 
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

.PHONY: clean fclean re