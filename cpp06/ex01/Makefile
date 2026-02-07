NAME = Serialization.out
CC = c++ -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Serializer.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all