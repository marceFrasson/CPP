SRC = 	ScalarConverter.cpp \
				main.cpp 

NAME = ScalarConverter

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		ScalarConverter created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		ScalarConverter deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		ScalarConverter deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re