//
// Created by jjy84 on 2023-05-23(023).
//

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.h"

class PhoneBook{
private:
	Contact contact[8];
public:
	PhoneBook(){};
	~PhoneBook(){};
	void	exit();
	void	add();
	void	search();
};


#endif
//namespace, 클래스, 멤버함수?, stdio streams?->cout cin, initialization lists, static, const,