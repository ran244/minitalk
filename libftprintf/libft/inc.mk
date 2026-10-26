LIBFT_DIR ?= .

LIBFT_SRCS = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c \
	ft_memset.c\
	ft_strlen.c\
	ft_bzero.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_strdup.c\
	ft_memchr.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_itoa.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_split.c

LIBFT_SRCS := $(addprefix $(LIBFT_DIR)/, $(LIBFT_SRCS)) 
LIBFT_OBJECTS = $(LIBFT_SRCS:.c=.o)
SRCS += $(LIBFT_SRCS)
OBJECTS += $(LIBFT_OBJECTS)
