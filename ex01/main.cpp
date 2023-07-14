#include "PhoneBook.hpp"

int    main(void)
{
	PhoneBook	pb;
	std::string cmd;

    while (!std::cin.eof() || !std::cin.fail()) {
		std::cout << "Enter the command: ";
        std::getline(std::cin, cmd);
        if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("ADD") == 0)
			pb.add();
		else if (cmd.compare("SEARCH") == 0)
			pb.search();
		else
			continue ;
	}
	return (0);
}