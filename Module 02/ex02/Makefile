SRC = 	Fixed.cpp \
				main.cpp

NAME = Fixed

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo ""
	@echo "|		Fixed created		|"
	@echo ""

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