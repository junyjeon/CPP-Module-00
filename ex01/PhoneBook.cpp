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
		contact[i].show_record(i);
}

void	PhoneBook::search() {
	show_all();
	std::cout << "Enter: The index of the entry to display" << std::endl;
	std::string str;
	int i;
	std::getline(std::cin, str);
	i = atoi(str.c_str());
	if (1 <= i && i <= 8)
		contact[i - 1].display();
	else
		std::cout << "Input error: invalid input" << std::endl;
}

void	PhoneBook::add() {
	contact[idx % 8].add();
	idx++;
}