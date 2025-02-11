#################################### VARIABLES ####################################
#Aliases
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.
AR = ar rcs
RM = rm -rdf

#Files
NAME = libft.a
SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_toupper.c \
		ft_tolower.c
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

####################################   RULES   ####################################
#Creative rules
all: $(NAME)

test: $(NAME)
	$(CC) $(CFLAGS) test.c $(INCLUDES) -L. -l:libft.a -o tests
	./tests

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#Destructive rules
fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

re: fclean all

#.PHONY
.PHONY: all bonus fclean clean re