SRC = 	HumanA.cpp \
				HumanB.cpp \
				main.cpp \
				Weapon.cpp

DEPS =	HumanA.hpp \
				HumanB.hpp \
				Weapon.hpp

NAME = violence

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =  -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address 

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		violence created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		violence deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		violence deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re