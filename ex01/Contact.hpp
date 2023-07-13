#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <signal.h>

class Contact{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
	void	tell(std::string *str);
public:
	Contact();
	~Contact();
	void	add();
	void	display();
	void	show_record(int i);
};

#endif
