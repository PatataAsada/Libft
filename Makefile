# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 09:51:48 by yemoreno          #+#    #+#              #
#    Updated: 2023/09/17 09:51:48 by yemoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c \
	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_tolower.c \
	ft_toupper.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS		= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean: #cleans objects
	rm -f $(OBJECTS) $(BONUS_OBJS)

fclean: clean #Cleans name
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS) $(BONUS_OBJS)
	$(AR) - r $(NAME) $(OBJECTS)
	$(AR) - r $(NAME) $(BONUS_OBJS)

.PHONY: all bonus clean fclean re