SRC = phonebook.cpp

NAME = phonebook

CC = g++

FLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98


$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		phonebook created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		phonebook deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		phonebook deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re