NAME		=	megaphone

CC			=	clang++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
# CFLAGS		+=	-fsanitize=address

BUILD_DIR	=	bulid

SRC		=	MegaPhone.cpp
OBJ		=	$(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)
	@echo "${YELLOW}> All objects files of the megaphone have been deleted.❌${END}"

fclean: clean
	@$(RM) -r $(NAME)
	@echo "${YELLOW}> Cleaning of the megaphone has been done.❌${END}"

re: fclean all

.PHONY: all clean fclean re