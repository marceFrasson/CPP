SRC = 	ClapTrap.cpp \
				main.cpp \
				ScavTrap.cpp

DEPS =	ClapTrap.hpp \
				ScavTrap.hpp

NAME = ScavTrap

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		ScavTrap created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

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