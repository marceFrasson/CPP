#include <iostream>

class PhoneBook
{
	Contact contacts[8]

	openIndexSpace(phoneBook)
	{
		int i = -1

		while (++i < 8)
			phoneBook.contacts[i] = phoneBook.contacts[i + 1]
		phoneBook.contacts[i] = NULL
	}

	int findOutIndex(phoneBook)
	{
		if (phoneBook.numberOfContacts == 8)
		{
			openIndexSpace(phoneBook) 
			return (8)
		}
		else
			return (phoneBook.numberOfContacts + 1)
		return (0);
	}

	addContact
	{
		newIndex = findOutIndex(phoneBook)
		phoneBook.contacts[index] = new (Contact)
		std::cout << "First Name: ";
		std::cin >> newContact.firstName;
		std::cout << enl << "Last Name: ";
		std::cin >> newContact.lastName;
		std::cout << enl << "Nickname: ";
		std::cin >> newContact.nickname;
		std::cout << enl << "Phone Number: ";
		std::cin >> newContact.phoneNumber;
		std::cout << enl << "Darkest Secret: ";
		std::cin >> newContact.darkestSecret;
	}

	searchContact
	{
		int i = -1;

		while (!exitPhoneBook)
			formmatToPrint(phoneBook, contact[i])
	}

	printIndex(int index)
	{
		int i = -1;

		while (++i < 9)
			std::cout << " "
		std::cout << index
	}

	printColumn(char *)
	{
		lettersToPrint = countLettersToPrint(contact.contact.) while (i < 10 - lettersToPrint)
		std::cout << " "
		while (i < lettersToPrint)
			std::cout << contact.contact.[i]
		if (lettersToPrint == 9 && lenght(contact.firstName > 9))
			std::cout << "."
	}

	checkNextStep(nextStep, i)
	{
		if (nextStep == "l")
			if (currentPage == FIRST_PAGE)
				currentPage = LAST_PAGE
				return (4)
			if (currentPage == LAST_PAGE)
				currentPage = FIRST_PAGE
				return (0)
		else if (nextStep == "n")
			if (currentPage == FIRST_PAGE)
				currentPage = LAST_PAGE
				return (0)
			if (currentPage == LAST_PAGE)
				currentPage = FIRST_PAGE
				return (4)
			else if (nextStep == "exit")
				phoneBook.exitPhoneBook = true;
		else
			std::cout << "invalid command" << endl
			return (ASK_AGAIN)
	}

	formmatToPrint(contact)
	{
		int i = -1
		int currentPage = FIRST_PAGE;
		char *nextStep

		while (++i < currentPage)
		{
			std::cout << "|" printIndex(contact.index)
			std::cout << "|" printColumn(contact.firstName)
			std::cout << "|" printColumn(contact.lastName)
			std::cout << "|" printColumn(contact.nickname)
			std::cout << "|" << endl
			std::cout << "type: last page \"l\" | next page \"n\" | \"exit\"" << endl
			std:cin >> nextStep
			i = checkNextStep(nextStep, i)
			while (i == ASK_AGAIN)
				std::cout >> nextStep
				i = checkNextStep(nextStep, i)
		}
	}
	
	class Contact
	{
		index!
		firstName!
		lastName!
		nickname!
		phoneNumber!
		darkestSecret!
	}

	main
	{
		phoneBook = new (PhoneBook)
	}

	/*

		|     index| firstName|  lastName|  nickname|
		|     index| firstName|  lastName|  nickname|
		|     index| firstName|  lastName|  nickname|
		|     index| firstName|  lastName|  nickname|

			type: last page "l" | next page "n" | "exit"

	*/