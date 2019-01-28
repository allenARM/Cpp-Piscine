NAME = phonebook
CFLAGS = -Wall -Werror -Wextra
HEADER = Contact.class.hpp

CFILES = phonebook.cpp display_contact.cpp add_contact.cpp Contact.class.cpp

all: $(NAME)

$(NAME):
	g++ $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all