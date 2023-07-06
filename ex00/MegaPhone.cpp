#include "MegaPhone.h"

int    main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++) {
		int size = strlen(argv[i]);
		for (int j = 0; j < size; j++){
			if (islower(argv[i][j]))
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}
