SRC = 	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp \
				Zombie.hpp

NAME = zombie

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic 


$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		zombie created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		zombie deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		zombie deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re