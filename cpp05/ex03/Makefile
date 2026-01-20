NAME = AForm.out
CC = c++ -Wall -Wextra -Werror -std=c++98
SRC = main.cpp AForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp RobotomyRequestForm.cpp  PresidentialPardonForm.cpp Intern.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all