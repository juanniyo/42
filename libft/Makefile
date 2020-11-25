# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobando- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 16:03:32 by jobando-          #+#    #+#              #
#    Updated: 2020/01/20 18:00:34 by jobando-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		  ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		  ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
		  ft_toupper.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c \
		  ft_isspace.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c
SRCSBON	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
CC		= gcc
FLAGS	= -c -Wall -Wextra -Werror
LIB		= ar rc
RLIB	= ranlib
OBJS	= $(SRCS:.c=.o)
OBJSBON	= $(SRCSBON:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRCS)
	@$(LIB) $(NAME) $(OBJS)
	@$(RLIB) $(NAME)
	@echo "Libreria creada"

.PHONY: all clean fclean re

clean:
	@rm -f $(OBJS) $(OBJSBON)
	@echo "Archivos eliminados"

fclean: clean
	@rm -f $(NAME)
	@echo "Archivo $(NAME) eliminado"

re: fclean all

bonus:	
	$(CC) $(FLAGS) $(SRCS) $(SRCSBON)
	$(LIB) $(NAME) $(OBJS) $(OBJSBON)
	$(RLIB) $(NAME)
