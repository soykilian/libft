NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -c
SRCS	= ft_strlen.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_bzero.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_memset.c \
		  ft_atoi.c \
		  ft_split.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_isascii.c \
		  ft_isalnum.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_memcpy.c \
		  ft_memccpy.c \
		  ft_isprint.c \
		  ft_memmove.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_striteri.c 
SRCBONUS = 	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c 
OBJS	= ${SRCS:.c=.o}
OBJSBONUS	= ${SRCBONUS:.c=.o}
RM		= rm -f

all: ${NAME}

%o: %c
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	@ar rc ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
		@${RM} ${NAME}

bonus:	${OBJSBONUS}
		@ar rc ${NAME} ${OBJSBONUS}

re:		fclean all
.PHONY:		clean re fclean bonus all
