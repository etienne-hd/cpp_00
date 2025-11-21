CXX=c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98 -I include
NAME = phonebook
SRC_DIR = src/
SRCS = $(SRC_DIR)main.cpp \
	$(SRC_DIR)PhoneBook.cpp \
	$(SRC_DIR)Contact.cpp \
	$(SRC_DIR)utils.cpp \
	$(SRC_DIR)cmd.cpp

OBJ_DIR = objs/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p objs/
	$(CXX) $(CXXFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
