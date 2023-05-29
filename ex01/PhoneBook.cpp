//
// Created by jjy84 on 2023-05-23(023).
//
#include "PhoneBook.h"

void	clear()
{

}

void	add()
{
	std::cout << "Enter: new contact information\n";
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

void	search()
{
	std::cout << std::right;
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << std::endl;
	std::cout << "Enter User index\n";
}


int    main(void)
{
	PhoneBook	pb[8];
	std::string cmd;

    while (!cin.eof()) {
        std::cin >> cmd;
        if (cmd.compare("EXIT") == 0){
            //	프로그램 종료. 연락처 클리어.
            pb[i].exit();
			return (0);
        }
		else if (cmd.compare("ADD") == 0) {
			/*	cin으로 한 필드씩 first_name, last_name, nickname, phone_number, darkest_secret 입력
				요구사항 하나는 영상 봐야댐
			*/
			pb[i].add();
		}
		else if (cmd.compare("SEARCH") == 0){
		/*	존재하는 연락처를 index, first_name, last_name, nickname 열로 보여줌
			너비 10문자 가로정렬 |문자로 구분
			if 너비보자 긴 문자열은 잘림 마지막 문자는
		*/
			pb[i].search();
		}
		else if (!std::cin.eof())
		else
			//	버려짐 discarded.
			continue ;

	}
	return (0);
}
//flush	Flush stream buffer (function)
//internal	Adjust field by inserting characters at an internal position (function)