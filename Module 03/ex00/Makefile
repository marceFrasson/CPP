SRC = 	ClapTrap.cpp \
				main.cpp

DEPS =	ClapTrap.hpp

NAME = ClapTrap

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		ClapTrap created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

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