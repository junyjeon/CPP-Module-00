#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : idx(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::show_all() {
	std::cout << std::right;
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << '|' << std::endl;
	int i = -1;
	while (++i < 8)
		this->contact[i].show_all(i);
}

void	PhoneBook::search() {
	this->show_all();
	std::cout << "Enter: The index of the entry to display" << std::endl;
	std::string str;
	int i;
	std::getline(std::cin, str);
	i = atoi(str.c_str());
	if (1 <= i && i <= 8)
		this->contact[i - 1].display();
	else
		std::cout << "Input error: invalid input" << std::endl;
}

void	PhoneBook::add() {
	contact[idx % 8].add();
	idx++;
}

int    main(void)
{
	PhoneBook	pb;
	std::string cmd;

    while (!std::cin.eof()) {
		std::cout << "Enter the command: " << std::endl;
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
