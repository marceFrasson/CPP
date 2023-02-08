SRC = 	main.cpp


NAME = mutantstack

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		mutantstack created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		mutantstack deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f *_shrubbery
	@echo ""
	@echo "|		mutantstack deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re