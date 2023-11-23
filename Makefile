# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: navarre <navarre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 15:04:21 by navarre           #+#    #+#              #
#    Updated: 2023/11/23 12:33:44 by navarre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_itoa.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_striteri.c ft_strmapi.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_strnstr.c ft_memset.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_memcpy.c ft_strdup.c ft_calloc.c ft_strlcpy.c ft_strlcat.c ft_memmove.c
SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
NAME = libft.a
NAME_SO = libft.so

#il va me falloir compiler avec CC CFLAGS et src car on veux transformer les c en o
#puis ranger tout les .o et les names dans un dossier libft.a avec "ar rc"

all : $(NAME)

#Compile tout les fichiers c en o avec les flags
%.o : %.c 
	$(CC) $(CFLAGS) -o $@ -c $<

#créer une bibliothèque
$(NAME) : $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : $(OBJ) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

#fclean + all
re : fclean all
