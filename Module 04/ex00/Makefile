SRC = 	Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				main.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

DEPS =	Animal.hpp \
				Cat.hpp \
				Dog.hpp \
				WrongAnimal.hpp \
				WrongCat.hpp

NAME = Animal

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		Animal created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

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