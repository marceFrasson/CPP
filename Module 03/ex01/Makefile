SRC = 	ClapTrap.cpp \
				main.cpp \
				ScavTrap.cpp

NAME = ScavTrap

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		ScavTrap created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		ScavTrap deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		ScavTrap deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re