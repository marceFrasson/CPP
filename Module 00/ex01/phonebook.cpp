#include "includes.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "|                        |" << std::endl;
	std::cout << "|    Choose a command:   |" << std::endl;
	std::cout << "|  ADD, SEARCH, or EXIT  |" << std::endl;
	std::cout << "|                        |" << std::endl;

	while (true)
	{
		std::getline( std::cin, command);
		if (command == "ADD")
			phoneBook.addContact(phoneBook);
		else if (command == "SEARCH")
			phoneBook.searchContact(phoneBook);
		else if (command == "EXIT")
			return (1);
		else
			std::cout << "invalid command, try again" << std::endl;
	}
	return (0);
}

/*

	|     index| firstName|  lastName|  nickname|
	|     index| firstName|  lastName|  nickname|
	|     index| firstName|  lastName|  nickname|
	|     index| firstName|  lastName|  nickname|

		type: last page "l" | next page "n" | "exit"

*/	