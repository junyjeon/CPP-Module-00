//
// Created by jjy84 on 2023-05-23(023).
//

#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook{
private:
	char book[8];
	char *first_name;
	char *last_name;
	char *nickname;
	char *phone_number;
	char *darkest_secret;
public:
	PhoneBook(){}
	~PhoneBook(){}
	void	exit() {
		~PhoneBook();
	}
	void	add(){
		std::cout << "first_name: ";
		std::cin >> first_name;
		std::cout << "last_name: ";
		std::cin >> last_name;
		std::cout << "nickname: ";
		std::cin >> nickname;
		std::cout << "phone_number: ";
		std::cin >> phone_number;
		std::cout << "darkest_secret: ";
		std::cin >> darkest_secret;
	}
	void	search(PhoneBook pb){
		std::cout << std::right;
		std::cout << std::setw(10) << "index" << '|';
		std::cout << std::setw(10) << "first name" << '|';
		std::cout << std::setw(10) << "last name" << '|';
		std::cout << std::setw(10) << "nickname" << std::endl;
	}
};

#endif //CPP00_PHONEBOOK_H
