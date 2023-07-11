NAME		=	PhoneBook

CC			=	clang++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
# CFLAGS		+=	-fsanitize=address -g

INC_DIR		=	.

BUILD_DIR	=	build

SRC		=	PhoneBook.cpp Contact.cpp
OBJ		=	$(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)
	@echo "${YELLOW}> All objects files of the phonebook have been deleted.❌${END}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${YELLOW}> Cleaning of the phonebook has been done.❌${END}"

re: fclean all

.PHONY: all clean fclean re
