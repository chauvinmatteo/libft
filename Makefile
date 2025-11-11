# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 15:31:42 by mchauvin          #+#    #+#              #
#    Updated: 2025/11/11 14:36:04 by mchauvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all re clean fclean

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
	 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)

re: fclean all