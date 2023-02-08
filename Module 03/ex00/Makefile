SRC = 	ClapTrap.cpp \
				main.cpp

NAME = ClapTrap

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		ClapTrap created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		ClapTrap deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		ClapTrap deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re