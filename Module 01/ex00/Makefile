SRC = 	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp

NAME = zombie

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address


$(NAME): $(SRC)
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