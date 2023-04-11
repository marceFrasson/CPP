SRC = 	Base.cpp \
				main.cpp

DEPS =	Base.hpp

NAME = Base

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		Base created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Base deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Base deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re