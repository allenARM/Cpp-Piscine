NAME = array
CFLAGS = -Wall -Werror -Wextra

INCLUDES = Array.hpp

CFILES = main.cpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(CFILES) -I $(INCLUDES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all