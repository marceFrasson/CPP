SRC = 	Bureaucrat.cpp \
				main.cpp

NAME = Bureaucrat

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		Bureaucrat created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Bureaucrat deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Bureaucrat deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re