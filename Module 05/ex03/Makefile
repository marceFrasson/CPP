SRC = 	AForm.cpp \
				AForm.hpp \
				Bureaucrat.cpp \
				Bureaucrat.hpp \
				Intern.cpp \
				Intern.hpp \
				main.cpp \
				PresidentialPardonForm.cpp \
				PresidentialPardonForm.hpp \
				RobotomyRequestForm.cpp \
				RobotomyRequestForm.hpp \
				ShrubberyCreationForm.cpp \
				ShrubberyCreationForm.hpp

NAME = Intern

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		Intern created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Intern deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f *_shrubbery
	@echo ""
	@echo "|		Intern deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re