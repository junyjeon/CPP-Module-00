#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();
	void	add();
	void	show_record(int i);
	void	tell(std::string *str);
	void	display(int i);
};

#endif
