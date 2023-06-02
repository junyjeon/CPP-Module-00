//
// Created by jjy84 on 2023-05-23(023).
//

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int		idx;
public:
	PhoneBook(){};
	~PhoneBook(){};
	void	show_all();
	void	search();
	void	add();
};

#endif
