SRC = 	Contact.cpp \
				phonebook.cpp \
				PhoneBook.cpp

DEPS =	Contact.class.hpp \
				includeLibs.hpp \
				includes.hpp \
				PhoneBook.class.hpp

NAME = phonebook

CC = c++

OBJ = $(SRC:.cpp=.o)

FLAGS =  -std=c++98 -Wall -Wextra -Werror -Wpedantic -fsanitize=address

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $@
	@echo ""
	@echo "|		phonebook created		|"
	@echo ""

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c $< -o $@

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