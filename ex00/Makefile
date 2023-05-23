NAME		=	megaphone

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
CFLAGS		+=	-fsanitize=address

INC_DIR		=	.

BUILD_DIR	=	bulid

SRC		=	megaphone.cpp
OBJ		=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.c | mkdir
	@$(CC) $(CFLAGS) -c $< -o $@

mkdir:
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)
	@echo "${YELLOW}> All objects files of the megaphone have been deleted.❌${END}"

fclean: clean
	@$(RM) -r $(NAME)
	@echo "${YELLOW}> Cleaning of the megaphone has been done.❌${END}"

re: fclean
	@$(MAKE)
	@echo "$(GREEN)Cleaned and rebuilt everything for megaphone!${END}"

.PHONY: all clean fclean re mkdir