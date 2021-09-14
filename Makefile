NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -c
SRCS	= ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_atoi.c ft_split.c ft_toupper.c ft_tolower.c ft_isascii.c ft_isalnum.c ft_strchr.c ft_strrchr.c ft_memcpy.c ft_memccpy.c ft_isprint.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

SRCH	= libft.h
OBJS	= ${SRCS:.c=.o}
RM		= rm -f


.PHONY:		clean re fclean
all: ${NAME}

$(NAME) : ${OBJS} ${SRCH}
	@ar rc ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS}

fclean:		clean
		@${RM} ${NAME}
bonus:	${OBJS} ${SRCH}
		@ar rc ${NAME} ${OBJS}

re:		fclean all
