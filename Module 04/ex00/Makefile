SRC = 	Animal.cpp \
				Animal.hpp \
				Cat.cpp \
				Cat.hpp \
				Dog.cpp \
				Dog.hpp \
				main.cpp \
				WrongAnimal.cpp \
				WrongAnimal.hpp \
				WrongCat.cpp \
				WrongCat.hpp

NAME = Animal

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		Animal created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Animal deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Animal deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re