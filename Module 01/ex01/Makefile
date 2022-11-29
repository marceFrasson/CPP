SRC = 	main.cpp \
				Zombie.cpp \
				Zombie.hpp \
				zombieHorde.cpp

NAME = zombie

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic 


$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		zombieHorde created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		zombieHorde deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		zombieHorde deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re