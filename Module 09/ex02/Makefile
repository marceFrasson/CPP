SRC = 	main.cpp \
				PmergeMe.cpp


NAME = PmergeMe

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		PmergeMe created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		PmergeMe deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		PmergeMe deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re