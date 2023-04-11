SRC = 	main.cpp

DEPS =	Array.hpp

NAME = Array

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		Array created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Array deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Array deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re