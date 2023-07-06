NAME		=	PhoneBook

CC			=	clang++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
CFLAGS		+=	-fsanitize=address -g

INC_DIR		=	.

BUILD_DIR	=	bulid

SRC		=	PhoneBook.cpp Contact.cpp
OBJ		=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.c | mkdir
	@$(CC) $(CFLAGS) -c $< -o $@

mkdir:
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)
	@echo "${YELLOW}> All objects files of the phonebook have been deleted.❌${END}"

fclean: clean
	@$(RM) -r $(NAME)
	@echo "${YELLOW}> Cleaning of the phonebook has been done.❌${END}"

re: fclean
	@$(MAKE)
	@echo "$(GREEN)Cleaned and rebuilt everything for phonebook!${END}"

.PHONY: all clean fclean re mkdir