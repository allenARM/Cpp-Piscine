NAME = ft_retro
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -lncurses
# FLAGS = -std=c++98 -pedantic -lncurses -g
G = g++
SRC = ft_retro.cpp Enemy.cpp player.cpp Weapon.cpp
OBJ = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(G) $(FLAGS) $(SRC) -o $@

%.o: %.cpp
	$(G) -c $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all