#include <iostream>

char	*megaphone(char *string)
{
	int i = -1;

	while (string[++i])
		string[i] = toupper(string[i]);
	std::cout << string;
	return (string);
}

int main(int argc, char **argv)
{	
	int i = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (++i < argc)
		argv[i] = megaphone(argv[i]);
	std::cout << std::endl;
	return (0);
}
