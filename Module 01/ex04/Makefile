SRC = 	main.cpp

NAME = replace

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address


$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		replace created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		replace deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f *.replace
	@echo ""
	@echo "|		replace deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re