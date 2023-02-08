SRC = 	HumanA.cpp \
				HumanA.hpp \
				HumanB.cpp \
				HumanB.hpp \
				main.cpp \
				Weapon.cpp \
				Weapon.hpp


NAME = violence

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address 


$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		violence created		|"
	@echo ""

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