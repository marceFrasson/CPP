SRC = 	main.cpp \
				Data.cpp \
				Data.hpp 


NAME = Serialization

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		Serialize created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		Serialize deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f *_shrubbery
	@echo ""
	@echo "|		Serialize deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re