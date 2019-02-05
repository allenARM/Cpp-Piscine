NAME = magic_file
CFLAGS = -Wall -Werror -Wextra

CFILES = main.cpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all