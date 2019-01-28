NAME = megaphone
CFLAGS = -Wall -Werror -Wextra

CFILES = megaphone.cpp

all: $(NAME)

$(NAME):
	g++ $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all