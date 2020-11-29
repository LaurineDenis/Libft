# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 11:44:21 by ldenis            #+#    #+#              #
#    Updated: 2020/11/29 17:40:20 by ldenis           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
 ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c \
 ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c \
 ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c \
 ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memccpy.c ft_memcmp.c \
 ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c

OBJS		= ${SRCS:.c=.o}

SRCS_BONUS	= ft_lstmap_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c\
ft_ftstrncpy_bonus.c ft_counterword_bonus.c ft_iszero_bonus.c

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

# Colors
GREY=$'\x1b[30m'
RED=$'\x1b[31m'
GREEN=$'\x1b[32m'
YELLOW=$'\x1b[33m'
BLUE=$'\x1b[34m'
PURPLE=$'\x1b[35m'
CYAN=$'\x1b[36m'
WHITE=$'\x1b[37m'

HEADER		= libft.h

RM			=	rm -f

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

.c.o:
			@${CC} ${CFLAGS} -I includes -c $< -o $@

$(NAME):	all

all:		${OBJS}
			@ar rcs ${NAME} ${OBJS}

bonus:		${OBJS_BONUS} ${OBJS}
			@ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}

clean:
			@${RM}  ${OBJS} ${OBJS_BONUS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all
