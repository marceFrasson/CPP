SRC = 	ClapTrap.cpp \
				FragTrap.cpp \
				main.cpp \
				ScavTrap.cpp

DEPS =	ClapTrap.hpp \
				FragTrap.hpp \
				ScavTrap.hpp

NAME = FragTrap

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		FragTrap created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

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