SRC = 	main.cpp

NAME = string

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		stringPTR-REF created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		stringPTR-REF deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		stringPTR-REF deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re