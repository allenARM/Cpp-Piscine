NAME = replace
CFLAGS = -Wall -Werror -Wextra

CFILES = replace.cpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all