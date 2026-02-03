NAME = ScalarConverter.out
CC = c++ -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all