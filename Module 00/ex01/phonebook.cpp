#include "includes.hpp"

void	printMenu(void)
{
	std::cout << std::endl;
	std::cout << "|                        |" << std::endl;
	std::cout << "|    Choose a command:   |" << std::endl;
	std::cout << "|  ADD, SEARCH, or EXIT  |" << std::endl;
	std::cout << "|                        |" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	PhoneBook phoneBook;
	std::string command;

	printMenu();
	while (true)
	{
		std::cout << "> ";
		std::getline( std::cin, command);
		if (command == "ADD")
			phoneBook.addContact(phoneBook);
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			if (phoneBook.searchContact(phoneBook))
				return (1);
			else
			{
				printMenu();
				continue ;
			}
		}
		else if (command == "EXIT")
			return (1);
		else
			std::cout << std::endl << "Invalid command, try again. " << std::endl << std::endl;
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