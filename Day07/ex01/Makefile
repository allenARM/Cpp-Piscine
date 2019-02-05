NAME = iter
CFLAGS = -Wall -Werror -Wextra

CFILES = iter.cpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all