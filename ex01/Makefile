NAME		=	PhoneBook

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 
CXXFLAGS		+=	-fsanitize=address -g2

INC_DIR		=	.

BUILD_DIR	=	build

SRC			=	main.cpp PhoneBook.cpp Contact.cpp
OBJ			=	$(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -I$(INC_DIR) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo "${YELLOW}> Cleaning of the phonebook has been done.❌${END}"

re: fclean all

.PHONY: all clean fclean re

Yellow : \033[0;33m
Green  : \033[0;32m