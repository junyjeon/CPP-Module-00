#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int		idx;
	void	show_all();
public:
	PhoneBook();
	~PhoneBook();
	void	search();
	void	add();
};

#endif
