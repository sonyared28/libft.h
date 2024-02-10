# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 14:52:29 by skomarov          #+#    #+#              #
#    Updated: 2023/11/27 18:46:26 by skomarov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_atoi.c ft_memchr.c ft_split.c ft_strncmp.c ft_bzero.c \
		ft_memcmp.c ft_strchr.c ft_strnstr.c ft_calloc.c ft_memcpy.c \
		ft_strdup.c ft_strrchr.c ft_isalnum.c ft_memmove.c ft_striteri.c \
		ft_strtrim.c ft_isalpha.c ft_memset.c ft_strjoin.c ft_substr.c \
		ft_isascii.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c ft_isdigit.c \
		ft_putendl_fd.c ft_strlcpy.c ft_toupper.c ft_isprint.c ft_putnbr_fd.c \
		ft_strlen.c ft_itoa.c ft_putstr_fd.c ft_strmapi.c

CFILESBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
		ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJFILES = $(CFILES:.c=.o)

OBJBONUS = $(CFILESBONUS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar

$(NAME): $(OBJFILES)
	$(AR) rc $(NAME) $(OBJFILES)

all: $(NAME)

bonus: $(OBJFILES) $(OBJBONUS)
	$(AR) rc $(NAME) $(OBJFILES) $(OBJBONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES) $(OBJBONUS)

fclean: clean
	rm -f $(OBJFILES) $(OBJBONUS)

re: fclean all

.PHONY: all clean fclean re bonus