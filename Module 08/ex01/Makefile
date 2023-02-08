SRC = 	main.cpp \
				Span.cpp


NAME = span

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		span created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		span deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f *_shrubbery
	@echo ""
	@echo "|		span deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re