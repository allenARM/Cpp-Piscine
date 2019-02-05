NAME = magic_file
CFLAGS = -Wall -Werror -Wextra

CFILES = main.cpp Converter.cpp

INCLUDES = Converter.hpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(CFILES) -I INCLUDES -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all