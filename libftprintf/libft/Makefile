NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

include inc.mk
%.o: %.c
	cc $(CFLAGS) -c $< -o $@
	
$(NAME): $(LIBFT_OBJECTS)
		ar rcs $@ $^
	
	
clean:
	rm -rf $(LIBFT_OBJECTS)
	
fclean: clean
		rm -rf $(NAME)
		
re: fclean all

.PHONY : all clean fclean re
