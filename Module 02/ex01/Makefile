SRC = 	Fixed.cpp \
				Fixed.hpp \
				main.cpp

NAME = Fixed

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic 


$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@
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