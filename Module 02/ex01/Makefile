SRC = 	Fixed.cpp \
				main.cpp

DEPS = Fixed.hpp

NAME = Fixed

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =  -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		Fixed created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Fixed deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Fixed deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re