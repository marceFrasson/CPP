SRC = 	main.cpp \
				Span.cpp

DEPS =	Span.hpp

NAME = Span

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =	-std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@
	@echo ""
	@echo "|		Span created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Span deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		Span deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re