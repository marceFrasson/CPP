SRC = 	main.cpp


NAME = whatever

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		whatever created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		whatever deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f *_shrubbery
	@echo ""
	@echo "|		whatever deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re