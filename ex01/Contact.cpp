#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::display() {
	std::cout << "first_name: " << this->first_name << std::endl;
	std::cout << "last_name: " << this->last_name << std::endl;
	std::cout << "nick_name: " << this->nick_name << std::endl;
	std::cout << "phone_number: " << this->phone_number << std::endl;
	std::cout << "darkest_secret: " << this->darkest_secret << std::endl;
}

void	Contact::show_all(int i) {
	std::cout << std::right;
	std::cout << std::setw(10) << i + 1 << '|';
	if (first_name.length() > 10)
		std::cout << std::setw(10) <<  first_name.substr(0, 9) + '.' << '|';
	else
		std::cout << std::setw(10) << first_name << '|';
	if (last_name.length() > 10)
		std::cout << std::setw(10) <<  last_name.substr(0, 9) + '.' << '|';
	else
		std::cout << std::setw(10) << last_name << '|';
	if (nick_name.length() > 10)
		std::cout << std::setw(10) <<  nick_name.substr(0, 9) + '.' << '|' << std::endl;
	else
		std::cout << std::setw(10) << nick_name << '|' << std::endl;
}

void	Contact::add() {
	std::cout << "Enter: new contact information\n";
	std::cout << "first_name: ";
	std::getline(std::cin, first_name);
	std::cin.clear();
	std::cout << "last_name: ";
	std::getline(std::cin, last_name);
	std::cin.clear();
	std::cout << "nick_name: ";
	std::getline(std::cin, nick_name);
	std::cin.clear();
	std::cout << "phone_number: ";
	std::getline(std::cin, phone_number);
	std::cin.clear();
	std::cout << "darkest_secret: ";
	std::getline(std::cin, darkest_secret);
	std::cin.clear();
}

