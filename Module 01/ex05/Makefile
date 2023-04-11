SRC = 	Harl.cpp \
				main.cpp

DEPS =	Harl.hpp

NAME = Harl

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =  -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		Harl created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Harl deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Harl deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re