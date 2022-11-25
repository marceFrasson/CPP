SRC = 	Contact.class.hpp \
				Contact.cpp \
				includeLibs.hpp \
				includes.hpp \
				PhoneBook.class.hpp \
				phonebook.cpp \
				PhoneBook.cpp

NAME = phonebook

CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic 


$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		phonebook created		|"
	@echo ""

all: $(NAME)

clean:
	@rm -f $(NAME)
	@echo ""
	@echo "|		phonebook deleted		|"
	@echo ""

fclean:
	@rm -f $(NAME)
	@rm -f *.o
	@echo ""
	@echo "|		phonebook deleted		|"
	@echo ""

re: fclean all

.PHONY: all clean fclean re