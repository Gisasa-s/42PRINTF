# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 13:45:02 by gisasa-s          #+#    #+#              #
#    Updated: 2021/10/25 17:11:30 by gisasa-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS= ft_libftprintf.c \
               ft_putnbr_hex.c \
			   ft_putnbr_ptr.c\
               ft_puntero.c \
               ft_printf_utils.c \
               ft_comprobantes.c \
			   ft_putnbr_hexa.c \

			   
CC= gcc  

CFLAGS= -Wall -Wextra -Werror

RM = rm -f

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re 
			   
