#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::display() {
	std::cout << "first_name: " << first_name << std::endl;
	std::cout << "last_name: " << last_name << std::endl;
	std::cout << "nick_name: " << nick_name << std::endl;
	std::cout << "phone_number: " << phone_number << std::endl;
	std::cout << "darkest_secret: " << darkest_secret << std::endl;
}

void	Contact::show_record(int i) {
	std::cout << std::right;
	std::cout << std::setw(10) << i + 1 << '|';
	if (first_name.length() > 10)
		std::cout << std::setw(10) <<  first_name.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << first_name << '|';
	if (last_name.length() > 10)
		std::cout << std::setw(10) <<  last_name.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << last_name << '|';
	if (nick_name.length() > 10)
		std::cout << std::setw(10) <<  nick_name.substr(0, 9) + ".|" << std::endl;
	else
		std::cout << std::setw(10) << nick_name << '|' << std::endl;
}

void	Contact::tell(std::string *str)
{
	while (std::getline(std::cin, *str) && (*str).empty())
		std::cin.clear();
}

void	Contact::add() {
	std::cout << "Enter: new contact information\n";
	std::cout << "first_name: "; tell(&first_name);
	std::cout << "last_name: "; tell(&last_name);
	std::cout << "nick_name: "; tell(&nick_name);
	std::cout << "phone_number: "; tell(&phone_number);
	std::cout << "darkest_secret: "; tell(&darkest_secret);
	a
}

