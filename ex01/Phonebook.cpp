//
// Created by jjy84 on 2023-05-23(023).
//
#include "Phonebook.h"

int    main(void)
{
	PhoneBook	pb = PhoneBook();
	std::string cmd;

	while (1){
		std::cin >> cmd;
		if (cmd.compare("EXIT") == 0)
		//	프로그램 종료. 연락처 클리어.
			pb.exit();
		else if (cmd.compare("ADD") == 0) {
			/*	cin으로 한 필드씩 first_name, last_name, nickname, phone_number, darkest_secret 입력
				PhoneBook 클래스로 연락처 배열포함
				요구사항 하나는 영상 봐야댐
			*/
			pb.add();
		}
		else if (cmd.compare("SEARCH") == 0){
		/*	존재하는 연락처를 index, first_name, last_name, nickname 열로 보여줌
			너비 10문자 가로정렬 |문자로 구분
			if 너비보자 긴 문자열은 잘림 마지막 문자는 .으로
		*/
			pb.search(pb);
		}
		else
			//	버려짐 discarded.
			continue ;
	}
	return (0);
}
