SRC = megaphone.cpp

NAME = megaphone

CC = g++

FLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98


$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		megaphone created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		megaphone deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		megaphone deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re