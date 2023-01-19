SRC = 	ClapTrap.cpp \
				ClapTrap.hpp \
				FragTrap.cpp \
				FragTrap.hpp \
				main.cpp \
				ScavTrap.cpp \
				ScavTrap.hpp

NAME = FragTrap

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		FragTrap created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		FragTrap deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		FragTrap deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re