SRC = main.cpp ClayTrap.cpp ScavTrap.cpp FragTrap.cpp  DiamondTrap.cpp
NAME = a.out
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all