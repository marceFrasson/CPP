SRC = 	ClapTrap.cpp \
				FragTrap.cpp \
				main.cpp \
				ScavTrap.cpp

NAME = FragTrap

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

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