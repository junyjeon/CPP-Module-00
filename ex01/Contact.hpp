//
// Created by jjy84 on 2023-05-23(023).
//

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
	Contact(){};
	~Contact(){};
	void	add();
	void	search();
	void	tell(std::string *dest);
	void	show_all(int i);
	void	display();
};

#endif
